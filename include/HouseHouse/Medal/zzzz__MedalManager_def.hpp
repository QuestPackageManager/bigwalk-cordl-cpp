#pragma once
// IWYU pragma private; include "HouseHouse/Medal/MedalManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MedalManager)
namespace HouseHouse::Medal {
struct MedalType;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace HouseHouse::Medal {
class MedalManager;
}
// Write type traits
MARK_REF_T(::HouseHouse::Medal::MedalManager*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Medal::MedalManager*, "HouseHouse.Medal", "MedalManager");
// Dependencies System.Object
namespace HouseHouse::Medal {
// Is value type: false
// CS Name: HouseHouse.Medal.MedalManager
class CORDL_TYPE MedalManager : public ::System::Object {
public:
// Declarations
/// @brief Field _alreadyFiredThisSession, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__alreadyFiredThisSession, put=setStaticF__alreadyFiredThisSession)) ::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*  _alreadyFiredThisSession;

static inline ::HouseHouse::Medal::MedalManager* New_ctor() ;

/// @brief Method UnlockMedal, addr 0x1803cd6e0, size 0xd0, virtual false, abstract: false, final false
static inline void UnlockMedal(::HouseHouse::Medal::MedalType  medalType) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>* getStaticF__alreadyFiredThisSession() ;

static inline void setStaticF__alreadyFiredThisSession(::System::Collections::Generic::HashSet_1<::HouseHouse::Medal::MedalType>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MedalManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MedalManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MedalManager(MedalManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MedalManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MedalManager(MedalManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HouseHouse::Medal::MedalManager) == 0x10, "Size mismatch!");

} // namespace end def HouseHouse::Medal
