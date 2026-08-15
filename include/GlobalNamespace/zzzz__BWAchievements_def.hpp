#pragma once
// IWYU pragma private; include "GlobalNamespace/BWAchievements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BWAchievements)
namespace Shipmate::Porting {
class EPlatformAchievement;
}
// Forward declare root types
namespace GlobalNamespace {
class BWAchievements;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BWAchievements*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BWAchievements*, "", "BWAchievements");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BWAchievements
class CORDL_TYPE BWAchievements : public ::System::Object {
public:
// Declarations
/// @brief Field Backpack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Backpack, put=setStaticF_Backpack)) ::Shipmate::Porting::EPlatformAchievement*  Backpack;

/// @brief Field Chairlift, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Chairlift, put=setStaticF_Chairlift)) ::Shipmate::Porting::EPlatformAchievement*  Chairlift;

/// @brief Field Drawbridge, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Drawbridge, put=setStaticF_Drawbridge)) ::Shipmate::Porting::EPlatformAchievement*  Drawbridge;

/// @brief Field Ending1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ending1, put=setStaticF_Ending1)) ::Shipmate::Porting::EPlatformAchievement*  Ending1;

/// @brief Field Ending2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ending2, put=setStaticF_Ending2)) ::Shipmate::Porting::EPlatformAchievement*  Ending2;

/// @brief Field Holster, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Holster, put=setStaticF_Holster)) ::Shipmate::Porting::EPlatformAchievement*  Holster;

/// @brief Field Map, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Map, put=setStaticF_Map)) ::Shipmate::Porting::EPlatformAchievement*  Map;

/// @brief Field Peak, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Peak, put=setStaticF_Peak)) ::Shipmate::Porting::EPlatformAchievement*  Peak;

/// @brief Field Shiny, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Shiny, put=setStaticF_Shiny)) ::Shipmate::Porting::EPlatformAchievement*  Shiny;

/// @brief Field Train, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Train, put=setStaticF_Train)) ::Shipmate::Porting::EPlatformAchievement*  Train;

/// @brief Field Tunnel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Tunnel, put=setStaticF_Tunnel)) ::Shipmate::Porting::EPlatformAchievement*  Tunnel;

/// @brief Field Wall, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Wall, put=setStaticF_Wall)) ::Shipmate::Porting::EPlatformAchievement*  Wall;

/// @brief Method Initialize, addr 0x18041c950, size 0x410, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GlobalNamespace::BWAchievements* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Backpack() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Chairlift() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Drawbridge() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Ending1() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Ending2() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Holster() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Map() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Peak() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Shiny() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Train() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Tunnel() ;

static inline ::Shipmate::Porting::EPlatformAchievement* getStaticF_Wall() ;

static inline void setStaticF_Backpack(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Chairlift(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Drawbridge(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Ending1(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Ending2(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Holster(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Map(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Peak(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Shiny(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Train(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Tunnel(::Shipmate::Porting::EPlatformAchievement*  value) ;

static inline void setStaticF_Wall(::Shipmate::Porting::EPlatformAchievement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BWAchievements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BWAchievements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BWAchievements(BWAchievements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BWAchievements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BWAchievements(BWAchievements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5212};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BWAchievements) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
