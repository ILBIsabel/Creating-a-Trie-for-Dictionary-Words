Creating a Trie for Dictionary Words in C



Data Structure Design: Implemented a Trie (prefix tree) data structure to manage and query a set of dictionary words. The Trie node structure includes an array of child nodes and a boolean flag to mark the end of each word.

Node Creation: Developed a getNode function to allocate and initialize new Trie nodes, setting child pointers to NULL and the end-of-word marker to false.

Word Insertion: Implemented an insert function to add words into the Trie, handling the creation of necessary child nodes for each character.

Word Search: Developed a search function to check for the existence of words within the Trie, returning true if the word is found and correctly marked as complete.

Demonstration Program: Created a main function to test the Trie by inserting and searching for words, and printing the results to verify the implementation.
