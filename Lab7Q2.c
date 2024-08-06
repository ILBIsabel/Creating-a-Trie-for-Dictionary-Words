#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 26

//Trie node structure
struct TrieNode{
    //Array of child nodes
    struct TrieNode* children[ALPHABET_SIZE];

    //Boolean value to indicate if the node represents the end of a word
    bool isEndOfWord;
};

//Function to create a new Trie node 
struct TrieNode* getNode(void){
    //Allocate memory for a new Trie node
    struct TrieNode* pNode = (struct TrieNode*)malloc(sizeof(struct TrieNode));

    //Initialize the end of word marker as false
    pNode->isEndOfWord = false;

    //Initialize all children as NULL
    for(int i = 0; i < ALPHABET_SIZE; i++){
        pNode->children[i] = NULL;
    }

    //Return the new node
    return pNode;
}

//Function to insert a word into the Trie
void insert(struct TrieNode* root, const char* word){
    struct TrieNode* pCrawl = root;

    //Traverse the given word character by character
    for(int i = 0; word[i] != '\0'; i++){
        int index = word[i] - 'a';

        //If the character node doesn't exist, create it
        if(!pCrawl->children[index]){
            pCrawl->children[index] = getNode();
        }

        //Move to the next character node
        pCrawl = pCrawl->children[index];
    }

    //Mark the end of the word
    pCrawl->isEndOfWord = true;
}

//Function to search a word in the Trie 
bool search(struct TrieNode* root, const char* word){
    struct TrieNode* pCrawl = root;

    //Traverse the given word character by character
    for(int i = 0; word[i] != '\0'; i++){
        int index = word[i] - 'a';

        //If the character node doesn't exist, return false
        if(!pCrawl->children[index]){
            return false;
        }

        //Move to the next character node
        pCrawl = pCrawl->children[index];
    }

    //Return true if the word is found and marked as end of word
    return (pCrawl != NULL && pCrawl->isEndOfWord);
}

//Main function to test the Trie implementation
int main(){
    //Array of words to be inserted
    char* words[] = {"hello", "world", "trie", "algorithm"};

    //Calculate the number of words
    int n = sizeof(words) / sizeof(words[0]);

    //Create the root node of the Trie
    struct TrieNode* root = getNode();

    printf("Insert words: hello, world, trie, algorithm.\n");

    //Insert words into the Trie
    for(int i = 0; i < n; i++){
        insert(root, words[i]);
    }

    //Search for words in the Trie and print the result
    char* queries[] = {"hello", "world", "trie", "data", "algo", "algorithm"};
    int q = sizeof(queries) / sizeof(queries[0]);

    for(int i = 0; i < q; i++){
        printf("Search for \"%s\": %s\n", queries[i], search(root, queries[i]) ?
               "Found" : "Not Found");
    }

    return 0;
}

/* Abstract:
   This program implements a Trie data structure to handle insertion and search operations for dictionary words. It defines a Trie node
   with an array of child nodes for each letter of the alphabet and a boolean flag to mark the end of a word. The program includes functions 
   to create a new Trie node, insert words into the Trie, and search for words within it. The `insert` function adds words character by character, 
   creating new nodes as needed. The `search` function traverses the Trie to find if a word exists. The main function demonstrates this
   by inserting a set of words into the Trie and searching for several queries, printing whether each query is found. This showcases 
   the Trie's capability for efficient word storage and lookup. Through this program, I gained a deeper understanding of the Trie's 
   usefulness in managing dictionary operations, efficiently storing and retrieving words, and providing accurate search results. */