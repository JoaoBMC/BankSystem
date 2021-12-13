#if !defined(MENU_H)
#define MENU_H
typedef enum SelectType{
    NEW_ACCOUNT     = 1,
    UPDATA_ACCOUNT  = 2,
    TRANSACT        = 3,
    EDIT_ACCOUNT    = 4,
    DELETE_ACCOUNT  = 5,
    VIEW_LIST_ACCOUNT = 6,
    VIEW_DATA_ACCOUNT = 7,
    EXIT            = 8

}SelectType;

char init_menu();
void titleFunction();

#endif // MENU_H
