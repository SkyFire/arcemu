/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2010 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "StdAfx.h"

class BloodPlagueSpell : public Spell
{
	SPELL_FACTORY_FUNCTION(BloodPlagueSpell);

	int32 DoCalculateEffect(uint32 i, Unit *target, int32 value)
	{
		if( p_caster != NULL && i == 0 )
			value += (uint32)( p_caster->GetAP() * 0.055 * 1.15 );

		return value;
	}
};

class IcyTouchSpell : public Spell
{
	SPELL_FACTORY_FUNCTION(IcyTouchSpell);

	int32 DoCalculateEffect(uint32 i, Unit *target, int32 value)
	{
		if( p_caster != NULL && i == 0 )
			value += (uint32)( p_caster->GetAP() * 0.1 );

		return value;
	}
};

class FrostFeverSpell : public Spell
{
	SPELL_FACTORY_FUNCTION(FrostFeverSpell);

	int32 DoCalculateEffect(uint32 i, Unit *target, int32 value)
	{
		if( p_caster != NULL && i == 0 )
			value += (uint32)( p_caster->GetAP() * 0.055 * 1.15 );

		return value;
	}
};

void SpellFactoryMgr::SetupDeathKnight()
{
	AddById( 55078, &BloodPlagueSpell::Create );
	AddById( 45477, &IcyTouchSpell::Create );
	AddById( 55095, &FrostFeverSpell::Create );
}
