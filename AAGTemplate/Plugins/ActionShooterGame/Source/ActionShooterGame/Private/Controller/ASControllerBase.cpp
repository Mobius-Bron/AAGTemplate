// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/ASControllerBase.h"

AASControllerBase::AASControllerBase()
{
	SetReplicates(true);
	SetNetUpdateFrequency(100.f);
}
