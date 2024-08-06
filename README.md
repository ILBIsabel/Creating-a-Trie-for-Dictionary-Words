Creating a Trie for Dictionary Words in C



Data Structure Design: Implemented a Trie (prefix tree) data structure to manage and query a set of dictionary words. The Trie node structure includes an array of child nodes and a boolean flag to mark the end of each word.

Node Creation: Developed a getNode function to allocate and initialize new Trie nodes, setting child pointers to NULL and the end-of-word marker to false.

Word Insertion: Implemented an insert function to add words into the Trie, handling the creation of necessary child nodes for each character.

Word Search: Developed a search function to check for the existence of words within the Trie, returning true if the word is found and correctly marked as complete.

Demonstration Program: Created a main function to test the Trie by inserting and searching for words, and printing the results to verify the implementation.


Abstract:
   This program implements a Trie data structure to handle insertion and search operations for dictionary words. It defines a Trie node
   with an array of child nodes for each letter of the alphabet and a boolean flag to mark the end of a word. The program includes functions 
   to create a new Trie node, insert words into the Trie, and search for words within it. The `insert` function adds words character by character, 
   creating new nodes as needed. The `search` function traverses the Trie to find if a word exists. The main function demonstrates this
   by inserting a set of words into the Trie and searching for several queries, printing whether each query is found. This showcases 
   the Trie's capability for efficient word storage and lookup. Through this program, I gained a deeper understanding of the Trie's 
   usefulness in managing dictionary operations, efficiently storing and retrieving words, and providing accurate search results. 
