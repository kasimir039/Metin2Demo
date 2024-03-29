#include "Equipment.h"

class Armor final : public Equipment
{
private:

	static equipmentType eqHp;
	static equipmentType eqDef;

public:

	Armor(std::string name, equipmentType hp, equipmentType defense);
	Armor() = delete;
	Armor(const Armor&) = delete;
	Armor(const Armor&&) = delete;



	static const equipmentType GetArmorHp() noexcept;
	static const equipmentType GetArmorDef() noexcept;


};