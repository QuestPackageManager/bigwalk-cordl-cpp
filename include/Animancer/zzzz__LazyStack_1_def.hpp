#pragma once
// IWYU pragma private; include "Animancer/LazyStack_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyStack_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Animancer {
template<typename T>
class LazyStack_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::LazyStack_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::LazyStack_1, "Animancer", "LazyStack`1");
// Dependencies System.Object
namespace Animancer {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Animancer.LazyStack`1<T>
class CORDL_TYPE LazyStack_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) T  Current;

/// @brief Field Stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stack, put=__cordl_internal_set_Stack)) ::System::Collections::Generic::List_1<T>*  Stack;

/// @brief Field _CurrentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentIndex, put=__cordl_internal_set__CurrentIndex)) int32_t  _CurrentIndex;

/// @brief Field <Current>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) T  _Current_k__BackingField;

/// @brief Method Decrement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Decrement() ;

/// @brief Method Increment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Increment() ;

static inline ::Animancer::LazyStack_1<T>* New_ctor() ;

static inline ::Animancer::LazyStack_1<T>* New_ctor(int32_t  capacity) ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_Stack() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_Stack() ;

constexpr int32_t const& __cordl_internal_get__CurrentIndex() const;

constexpr int32_t& __cordl_internal_get__CurrentIndex() ;

constexpr T const& __cordl_internal_get__Current_k__BackingField() const;

constexpr T& __cordl_internal_get__Current_k__BackingField() ;

constexpr void __cordl_internal_set_Stack(::System::Collections::Generic::List_1<T>*  value) ;

constexpr void __cordl_internal_set__CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set__Current_k__BackingField(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Current() ;

/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LazyStack_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LazyStack_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyStack_1(LazyStack_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyStack_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyStack_1(LazyStack_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18080};

/// @brief Field Stack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___Stack;

/// @brief Field _CurrentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ____CurrentIndex;

/// @brief Field <Current>k__BackingField, offset: 0x20, size: 0x8, def value: None
 T  ____Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
