#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/StateTuple_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StateTuple_3)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
template<typename T1,typename T2,typename T3>
class StateTuple_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Internal::StateTuple_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Internal::StateTuple_3, "Cysharp.Threading.Tasks.Internal", "StateTuple`3");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.StateTuple`3<T1,T2,T3>
class CORDL_TYPE StateTuple_3 : public ::System::Object {
public:
// Declarations
/// @brief Field Item1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Item1, put=__cordl_internal_set_Item1)) T1  Item1;

/// @brief Field Item2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Item2, put=__cordl_internal_set_Item2)) T2  Item2;

/// @brief Field Item3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Item3, put=__cordl_internal_set_Item3)) T3  Item3;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Deconstruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Deconstruct(::by_ref<T1>  item1, ::by_ref<T2>  item2, ::by_ref<T3>  item3) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Internal::StateTuple_3<T1,T2,T3>* New_ctor() ;

constexpr T1 const& __cordl_internal_get_Item1() const;

constexpr T1& __cordl_internal_get_Item1() ;

constexpr T2 const& __cordl_internal_get_Item2() const;

constexpr T2& __cordl_internal_get_Item2() ;

constexpr T3 const& __cordl_internal_get_Item3() const;

constexpr T3& __cordl_internal_get_Item3() ;

constexpr void __cordl_internal_set_Item1(T1  value) ;

constexpr void __cordl_internal_set_Item2(T2  value) ;

constexpr void __cordl_internal_set_Item3(T3  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateTuple_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateTuple_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateTuple_3(StateTuple_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateTuple_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateTuple_3(StateTuple_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14729};

/// @brief Field Item1, offset: 0x10, size: 0x8, def value: None
 T1  ___Item1;

/// @brief Field Item2, offset: 0x18, size: 0x8, def value: None
 T2  ___Item2;

/// @brief Field Item3, offset: 0x20, size: 0x8, def value: None
 T3  ___Item3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Internal
