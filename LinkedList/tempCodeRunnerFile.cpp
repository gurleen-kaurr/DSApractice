        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> val;
                tree.insert(val);
                cout << val << " inserted." << endl;
                break;

            case 2:
                tree.reverseLevelOrderTraversal();
                break;

            case 3:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}