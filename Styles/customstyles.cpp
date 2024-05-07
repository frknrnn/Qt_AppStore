#include "customstyles.h"

QString  MainWindow_LeftMenu_ExpanderExpendStyle =  "QPushButton {"
                                                "    background-image: url(:/icons/Assets/icons/leftArrow.png);" // Normal durumda arka plan rengi
                                                "    background-color: rgb(37, 33, 33);"
                                                "    border: none;"              // Kenarlık yok
                                                "    background-repeat: no-repeat;"
                                                "    background-position: center;"
                                                "    border-top-left-radius: 0;"
                                                "    border-top-right-radius: 5px;"
                                                "    border-bottom-right-radius: 5px;"
                                                "    border-bottom-left-radius: 0px;"
                                                "}";


QString MainWindow_LeftMenu_ExpanderNoExpendStyle = "QPushButton {"
                                                "    background-image: url(:/icons/Assets/icons/rightArrow.png);" // Normal durumda arka plan rengi
                                                "    border: none;"              // Kenarlık yok
                                                "    background-color: rgb(37, 33, 33);"
                                                "    background-repeat: no-repeat;"
                                                "    background-position: center;"
                                                "    border-top-left-radius: 0;"
                                                "    border-top-right-radius: 5px;"
                                                "    border-bottom-right-radius: 5px;"
                                                "    border-bottom-left-radius: 0px;"
                                                "}";

QString  MainWindow_LeftMenu_ExpanderHoverStyle = "QPushButton:hover {"
                                             "background-color: rgb(119, 118, 123);"
                                             "    border: none;"              // Kenarlık yok
                                             "    background-repeat: no-repeat;"
                                             "}";

QString MainWindow_SizeGrip_StyleSheet = "width: 20px; height: 20px; margin 0px; padding: 0px;";


QString MainWindow_DashboardActive_StyleSheet = "QPushButton{"
                                                "font: 700 11pt Ubuntu;"
                                                "background-image: url(:/icons/Assets/icons/Dashboard.png);"
                                                "background-color:rgb(200, 69, 0);"
                                                "border-radius:2px;"
                                                "color: rgb(255, 255, 255);"
                                                "border:none;"
                                                "padding: 0px 10px 0px 10px;"
                                                "background-repeat: no-repeat;"
                                                "background-position: left center;"
                                                "background-origin: content; "
                                                "}";

QString MainWindow_DashboardNoActive_StyleSheet = "QPushButton{"
                                                "font: 700 11pt Ubuntu;"
                                                "background-image: url(:/icons/Assets/icons/Dashboard.png);"
                                                "background-color:transparent;"
                                                "border-radius:2px;"
                                                "color: rgb(255, 255, 255);"
                                                "border:none;"
                                                "padding: 0px 10px 0px 10px;"
                                                "background-repeat: no-repeat;"
                                                "background-position: left center;"
                                                "background-origin: content; "
                                                "}";


QString MainWindow_SerialActive_StyleSheet = "QPushButton{"
                                                "font: 700 11pt Ubuntu;"
                                                "background-image: url(:/icons/Assets/icons/Key.png);"
                                                "background-color:rgb(200, 69, 0);"
                                                "border-radius:2px;"
                                                "color: rgb(255, 255, 255);"
                                                "border:none;"
                                                "padding: 0px 10px 0px 10px;"
                                                "background-repeat: no-repeat;"
                                                "background-position: left center;"
                                                "background-origin: content; "
                                                "}";

QString MainWindow_SerialNoActive_StyleSheet = "QPushButton{"
                                                  "font: 700 11pt Ubuntu;"
                                                  "background-image: url(:/icons/Assets/icons/Key.png);"
                                                  "background-color:transparent;"
                                                  "border-radius:2px;"
                                                  "color: rgb(255, 255, 255);"
                                                  "border:none;"
                                                  "padding: 0px 10px 0px 10px;"
                                                  "background-repeat: no-repeat;"
                                                  "background-position: left center;"
                                                  "background-origin: content; "
                                                  "}";

QString MainWindow_FavoritesActive_StyleSheet = "QPushButton{"
                                             "font: 700 11pt Ubuntu;"
                                             "background-image: url(:/icons/Assets/icons/Star.png);"
                                             "background-color:rgb(200, 69, 0);"
                                             "border-radius:2px;"
                                             "color: rgb(255, 255, 255);"
                                             "border:none;"
                                             "padding: 0px 10px 0px 10px;"
                                             "background-repeat: no-repeat;"
                                             "background-position: left center;"
                                             "background-origin: content; "
                                             "}";

QString MainWindow_FavoritesNoActive_StyleSheet = "QPushButton{"
                                               "font: 700 11pt Ubuntu;"
                                               "background-image: url(:/icons/Assets/icons/Star.png);"
                                               "background-color:transparent;"
                                               "border-radius:2px;"
                                               "color: rgb(255, 255, 255);"
                                               "border:none;"
                                               "padding: 0px 10px 0px 10px;"
                                               "background-repeat: no-repeat;"
                                               "background-position: left center;"
                                               "background-origin: content; "
                                               "}";

QString  MainWindow_MainWindow_HoverStyle =     "QPushButton:hover {"
                                                 "background-color:rgb(200, 69, 0);"
                                                 "border: none;"
                                                 "background-repeat: no-repeat;"
                                                 "}";


QString  AppListItem_Favorites_UnselectedStyle ="QPushButton{"
                                           "background-image: url(:/icons/Assets/icons/circle_star.png);"
                                           "background-color: rgb(164, 73, 0);"
                                           "border-radius:18px;"
                                           "font: 87 12pt 'Segoe UI Black';"
                                           "color: rgb(255, 255, 255);"
                                           "border:none;"
                                           "background-repeat: no-repeat;"
                                           "background-position: center;"
                                           "}";


QString  AppListItem_Favorites_SelectedStyle ="QPushButton{"
                                              "background-image: url(:/icons/Assets/icons/circle_star.png);"
                                              "background-color: rgb(20, 164, 0);"
                                              "border-radius:18px;"
                                              "font: 87 12pt 'Segoe UI Black';"
                                              "color: rgb(255, 255, 255);"
                                              "border:none;"
                                              "background-repeat: no-repeat;"
                                              "background-position: center;"
                                              "}";

QString  AppListItem_Favorites_HoverStyle ="QPushButton:hover {"
                                              "background-color: rgb(200, 69, 0);"
                                              "border:none;"
                                              "}";
