#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/ConcurrentPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentPool_1)
namespace Dissonance::Datastructures {
template<typename T>
class IRecycler_1;
}
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
namespace Dissonance::Threading {
template<typename T>
class ReadonlyLockedValue_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class ConcurrentPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::ConcurrentPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::ConcurrentPool_1, "Dissonance.Datastructures", "ConcurrentPool`1");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.ConcurrentPool`1<T>
class CORDL_TYPE ConcurrentPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _factory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__factory, put=__cordl_internal_set__factory)) ::System::Func_1<T>*  _factory;

/// @brief Field _getter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__getter, put=__cordl_internal_set__getter)) ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  _getter;

/// @brief Field _items, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::Dissonance::Datastructures::TransferBuffer_1<T>*  _items;

/// @brief Field _putter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__putter, put=__cordl_internal_set__putter)) ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  _putter;

/// @brief Convert operator to "::Dissonance::Datastructures::IRecycler_1<T>"
constexpr operator  ::Dissonance::Datastructures::IRecycler_1<T>*() noexcept;

/// @brief Method Dissonance.Datastructures.IRecycler<T>.Recycle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Datastructures_IRecycler_T__Recycle(T  item) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get() ;

static inline ::Dissonance::Datastructures::ConcurrentPool_1<T>* New_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Put(T  item) ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get__factory() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get__factory() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>* const& __cordl_internal_get__getter() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*& __cordl_internal_get__getter() ;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<T>* const& __cordl_internal_get__items() const;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<T>*& __cordl_internal_get__items() ;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>* const& __cordl_internal_get__putter() const;

constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*& __cordl_internal_get__putter() ;

constexpr void __cordl_internal_set__factory(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set__getter(::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__items(::Dissonance::Datastructures::TransferBuffer_1<T>*  value) ;

constexpr void __cordl_internal_set__putter(::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxSize, ::System::Func_1<T>*  factory) ;

/// @brief Convert to "::Dissonance::Datastructures::IRecycler_1<T>"
constexpr ::Dissonance::Datastructures::IRecycler_1<T>* i___Dissonance__Datastructures__IRecycler_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConcurrentPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConcurrentPool_1(ConcurrentPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConcurrentPool_1(ConcurrentPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16936};

/// @brief Field _factory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<T>*  ____factory;

/// @brief Field _items, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Datastructures::TransferBuffer_1<T>*  ____items;

/// @brief Field _getter, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  ____getter;

/// @brief Field _putter, offset: 0x28, size: 0x8, def value: None
 ::Dissonance::Threading::ReadonlyLockedValue_1<int32_t>*  ____putter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures
