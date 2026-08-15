#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/LogCategoryLevelPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogCategoryLevelPair)
// Forward declare root types
namespace PlayEveryWare::EpicOnlineServices {
class LogCategoryLevelPair;
}
// Write type traits
MARK_REF_T(::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*);
DEFINE_IL2CPP_CLASS(::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair*, "PlayEveryWare.EpicOnlineServices", "LogCategoryLevelPair");
// Dependencies System.Object
namespace PlayEveryWare::EpicOnlineServices {
// Is value type: false
// CS Name: PlayEveryWare.EpicOnlineServices.LogCategoryLevelPair
class CORDL_TYPE LogCategoryLevelPair : public ::System::Object {
public:
// Declarations
/// @brief Field Category, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Category, put=__cordl_internal_set_Category)) ::StringW  Category;

/// @brief Field Level, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) ::StringW  Level;

static inline ::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair* New_ctor(::StringW  category, ::StringW  level) ;

constexpr ::StringW const& __cordl_internal_get_Category() const;

constexpr ::StringW& __cordl_internal_get_Category() ;

constexpr ::StringW const& __cordl_internal_get_Level() const;

constexpr ::StringW& __cordl_internal_get_Level() ;

constexpr void __cordl_internal_set_Category(::StringW  value) ;

constexpr void __cordl_internal_set_Level(::StringW  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, ::StringW  level) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogCategoryLevelPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogCategoryLevelPair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogCategoryLevelPair(LogCategoryLevelPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogCategoryLevelPair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogCategoryLevelPair(LogCategoryLevelPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18844};

/// @brief Field Category, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Category;

/// @brief Field Level, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Level;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair, ___Category) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair, ___Level) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayEveryWare::EpicOnlineServices::LogCategoryLevelPair) == 0x20, "Size mismatch!");

} // namespace end def PlayEveryWare::EpicOnlineServices
