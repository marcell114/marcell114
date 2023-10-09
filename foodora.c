#include <stdio.h>

void calculator(void)
{
	int pickup;
	int dropoff;
	int perkm;
	int income;
	float benzin;
	float avfuelusage;
	float totalkm;
	int totaldelivery;
	float totalfuelusage;
	float totalbenzin;
	int cleanmoney;

	pickup = 10;
	dropoff = 25;
	perkm = 4;

	printf("Type how may km you have driven on this shift: \n");
	scanf("%f", &totalkm);
	printf("Type what is the actual fuel price: \n");
	scanf("%f", &benzin);
	printf("Type the avarange fuel usage per 100 km: \n");
	scanf("%f", &avfuelusage);
	printf("Type how many delivery you have completed today: \n");
	scanf("%d", &totaldelivery);
	income = (pickup * totaldelivery) + (dropoff * totaldelivery) + (totalkm * perkm);
	printf("Congartulation you have earned %d Kc! \n", income);
	avfuelusage = avfuelusage * 0.01;
	totalfuelusage = avfuelusage * totalkm;
	totalbenzin = totalfuelusage * benzin;
	cleanmoney = income - totalbenzin;
	printf("And your clean money is: %d ", cleanmoney);

}

int main(void)
{
	calculator();
}