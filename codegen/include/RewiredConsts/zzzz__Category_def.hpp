#pragma once
// IWYU pragma private; include "RewiredConsts/Category.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Category)
// Forward declare root types
namespace RewiredConsts {
class Category;
}
// Write type traits
MARK_REF_T(::RewiredConsts::Category*);
DEFINE_IL2CPP_CLASS(::RewiredConsts::Category*, "RewiredConsts", "Category");
// Dependencies System.Object
namespace RewiredConsts {
// Is value type: false
// CS Name: RewiredConsts.Category
class CORDL_TYPE Category : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Category() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Category", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Category(Category && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Category", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Category(Category const& ) = delete;

/// @brief Field Default offset 0xffffffff size 0x4
static constexpr int32_t  Default{static_cast<int32_t>(0x0)};

/// @brief Field Dev offset 0xffffffff size 0x4
static constexpr int32_t  Dev{static_cast<int32_t>(0x3)};

/// @brief Field Shared offset 0xffffffff size 0x4
static constexpr int32_t  Shared{static_cast<int32_t>(0x2)};

/// @brief Field TextEntry offset 0xffffffff size 0x4
static constexpr int32_t  TextEntry{static_cast<int32_t>(0x4)};

/// @brief Field UI offset 0xffffffff size 0x4
static constexpr int32_t  UI{static_cast<int32_t>(0x1)};

/// @brief Field UIMainMenu offset 0xffffffff size 0x4
static constexpr int32_t  UIMainMenu{static_cast<int32_t>(0x5)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::RewiredConsts::Category) == 0x10, "Size mismatch!");

} // namespace end def RewiredConsts
