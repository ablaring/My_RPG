/*
** EPITECH PROJECT, 2022
** Task 01
** File description:
** day 07
*/

int my_compute_power_rec (int nb, int power)
{
    int result = 1;
    if (power == 0) {
        return (result);
    }
    if (power < 0) {
        return (0);
    }
    result = nb* my_compute_power_rec(nb, power - 1);
    return (result);

}
