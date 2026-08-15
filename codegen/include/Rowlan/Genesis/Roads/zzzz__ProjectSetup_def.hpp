#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/ProjectSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProjectSetup)
// Forward declare root types
namespace Rowlan::Genesis::Roads {
class ProjectSetup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Roads::ProjectSetup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Roads::ProjectSetup*, "Rowlan.Genesis.Roads", "ProjectSetup");
// Dependencies System.Object
namespace Rowlan::Genesis::Roads {
// Is value type: false
// CS Name: Rowlan.Genesis.Roads.ProjectSetup
class CORDL_TYPE ProjectSetup : public ::System::Object {
public:
// Declarations
/// @brief Field DEVELOPER_MODE, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DEVELOPER_MODE, put=setStaticF_DEVELOPER_MODE)) bool  DEVELOPER_MODE;

static inline bool getStaticF_DEVELOPER_MODE() ;

static inline void setStaticF_DEVELOPER_MODE(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectSetup(ProjectSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectSetup(ProjectSetup const& ) = delete;

/// @brief Field MENU offset 0xffffffff size 0x8
static constexpr ::ConstString  MENU{u"Window/Genesis for MicroVerse/Roads"};

/// @brief Field SETTINGS_DIRECTORY offset 0xffffffff size 0x8
static constexpr ::ConstString  SETTINGS_DIRECTORY{u"Assets/Rowlan/Genesis Data/Settings"};

/// @brief Field SETTINGS_FILENAME offset 0xffffffff size 0x8
static constexpr ::ConstString  SETTINGS_FILENAME{u"Roads Settings.asset"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::Roads::ProjectSetup) == 0x10, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Roads
