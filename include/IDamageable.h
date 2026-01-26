#pragma once

class IDamageable
{
public:
	virtual ~IDamageable() {}
	virtual void TakeDamage(int dmg) = 0;
};

/*
 * Use: IDamageable target = GetDamageableAt(hitPos)
 * if (target)
 * target->TakeDamage(5);
 */