#include <stdio.h>
#include <string.h>

float temperature(int oldUnit, int newUnit, float temp){
    if(oldUnit == 1){
        if(newUnit == 1){
            return temp;
        }
        else if(newUnit == 2){
            return (temp * 9/5 + 32);
        }
        else if(newUnit == 3){
            return (temp + 273.15);
        }
    }
    else if(oldUnit == 2){
        if(newUnit == 1){
            return (temp - 32) * 5/9;
        }
        else if(newUnit == 2){
            return temp;
        }
        else if(newUnit == 3){
            return (temp + 459.67) * 5/9;
        }
    }
    else if(oldUnit == 3){
        if(newUnit == 1){
            return temp - 273.15;
        }
        else if(newUnit == 2){
            return temp * 9/5 - 459.67;
        }
        else if(newUnit == 3){
            return temp;
        }
    }
}

float distance(int oldUnit, int newUnit, float dist){
    if (oldUnit == 1){
        if (newUnit == 1){
            return dist;
        }
        else if (newUnit == 2){
            return dist / 1000;
        }
        else if (newUnit == 3){
            return (dist/1000) / 1.609;
        }
    }
    else if (oldUnit == 2){
        if (newUnit == 1){
            return dist * 1000;
        }
        else if (newUnit == 2){
            return dist;
        }
        else if (newUnit == 3){
            return dist / 1.609;
        }
    }
    else if (oldUnit == 3){
        if (newUnit == 1){
            return (dist * 1.609)*1000;
        }
        else if (newUnit == 2){
            return dist * 1.609;
        }
        else if (newUnit == 3){
            return dist;
        }
    }
}

float weight(int oldUnit, int newUnit, float wei){
    if (oldUnit == 1){
        if (newUnit == 1){
            return wei;
        }
        else if (newUnit == 2){
            return wei * 2.204;
        }
        else if (newUnit == 3){
            return wei * 35.274;
        }
    }
    else if(oldUnit == 2){
        if (newUnit == 1){
            return wei / 2.204;
        }
        else if (newUnit == 2){
            return wei;
        }
        else if (newUnit == 3){
            return wei * 16;
        }
    }
    else if(oldUnit == 3){
        if (newUnit == 1){
            return wei / 35.274;
        }
        else if (newUnit == 2){
            return wei / 16;
        }
        else if (newUnit == 3){
            return wei;
        }
    }
}

int main(){
    int option = 0;

    printf("Welcome to the unit converter!\n");
    printf("1. temperatures\n");
    printf("2. distances\n");
    printf("3. weights\n");
    printf("4. quit\n");

    printf("Please enter the unit you want to convert from: ");
    scanf("%d", &option);
    
    while (1){
        int oldUnit = 0;
        int newUnit = 0;
        int temp = 0;

        if (option == 1){
            // temperatures
            printf("\nUnits:\n");
            
            printf("1. Celsius\n");
            printf("2. Fahrenheit\n");
            printf("3. Kelvin\n");
            printf("4. Quit\n");
            
            printf("\n");
            
            printf("Please enter the unit you want to convert from: ");
            scanf("%d", &oldUnit);

            if(oldUnit == 4){
                break;
            }

            printf("Please enter the unit you want to convert to: ");
            scanf("%d", &newUnit);

            printf("Please enter the temperature you want to convert: ");
            scanf("%d", &temp);

            if(newUnit == 1){
                printf("\n%.2f°C\n",temperature(oldUnit, newUnit, temp));
            }
            if(newUnit == 2){
                printf("\n%.2f°F\n",temperature(oldUnit, newUnit, temp));
            }
            if(newUnit == 3){
                printf("\n%.2f°K\n",temperature(oldUnit, newUnit, temp));
            }
        }
        else if (option == 2){
            // distance
            int oldUnit = 0, newUnit = 0;
            float dist = 0;

            printf("\nUnits:\n");
            
            printf("1. Meters\n");
            printf("2. Kilometers\n");
            printf("3. Miles\n");
            printf("4. Quit\n");
            
            printf("\n");
            
            printf("Please enter the unit you want to convert from: ");
            scanf("%d", &oldUnit);
            
            if(oldUnit == 4){
                break;
            }
            
            printf("Please enter the unit you want to convert to: ");
            scanf("%d", &newUnit);
            
            printf("Please enter the distance you want to convert: ");
            scanf("%e", &dist);
            
            if(newUnit == 1){
                printf("\n%.2f m\n",distance(oldUnit, newUnit, dist));
            }
            if(newUnit == 2){
                printf("\n%.2f km\n",distance(oldUnit, newUnit, dist));
            }
            if(newUnit == 3){
                printf("\n%.2f mi\n",distance(oldUnit, newUnit, dist));
            }

        }
        else if (option == 3){
            int oldUnit = 0;
            int newUnit = 0;
            float wei = 0;

            printf("\nUnits:\n");

            printf("1. Kilograms\n");
            printf("2. Pounds\n");
            printf("3. Ounces\n");
            printf("4. Quit\n");
            
            printf("\n");
            
            printf("Please enter the unit you want to convert from: ");
            scanf("%d", &oldUnit);
            
            if(oldUnit == 4){
                break;
            }
            
            printf("Please enter the unit you want to convert to: ");
            scanf("%d", &newUnit);
            
            printf("Please enter the weight you want to convert: ");
            scanf("%e", &wei);
            
            if(newUnit == 1){
                printf("\n%.2f kg\n",weight(oldUnit, newUnit, wei));
            }
            if(newUnit == 2){
                printf("\n%.2f lb\n",weight(oldUnit, newUnit, wei));
            }
            if(newUnit == 3){
                printf("\n%.2f oz\n",weight(oldUnit, newUnit, wei));
            }
        }
        else if (option == 4){
            break;
        }
    }
    return 0;
}