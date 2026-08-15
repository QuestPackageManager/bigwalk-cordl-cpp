#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ReadOnlyArrayStruct_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyArrayStruct_1)
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
template<typename T>
struct ReadOnlyArrayStruct_1;
}
// Write type traits
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1);
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Data::ReadOnlyArrayStruct_1, "Rewired.Utils.Classes.Data", "ReadOnlyArrayStruct`1");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.ReadOnlyArrayStruct`1<T>
struct CORDL_TYPE ReadOnlyArrayStruct_1 {
public:
// Declarations
 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyArrayStruct_1() ;

// Ctor Parameters [CppParam { name: "yGHoMKQgEZqcuEQVUwFsxmtuqNpP", ty: "::ArrayW<T>", modifiers: "", def_value: None }]
constexpr ReadOnlyArrayStruct_1(::ArrayW<T>  yGHoMKQgEZqcuEQVUwFsxmtuqNpP) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field yGHoMKQgEZqcuEQVUwFsxmtuqNpP, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  yGHoMKQgEZqcuEQVUwFsxmtuqNpP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Data
