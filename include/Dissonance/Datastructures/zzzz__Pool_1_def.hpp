#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/Pool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pool_1)
namespace Dissonance::Datastructures {
template<typename T>
class IRecycler_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class Pool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::Pool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::Pool_1, "Dissonance.Datastructures", "Pool`1");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.Pool`1<T>
class CORDL_TYPE Pool_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _factory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__factory, put=__cordl_internal_set__factory)) ::System::Func_1<T>*  _factory;

/// @brief Field _items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Collections::Generic::Stack_1<T>*  _items;

/// @brief Field _maxSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSize, put=__cordl_internal_set__maxSize)) int32_t  _maxSize;

/// @brief Convert operator to "::Dissonance::Datastructures::IRecycler_1<T>"
constexpr operator  ::Dissonance::Datastructures::IRecycler_1<T>*() noexcept;

/// @brief Method Dissonance.Datastructures.IRecycler<T>.Recycle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dissonance_Datastructures_IRecycler_T__Recycle(T  item) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get() ;

static inline ::Dissonance::Datastructures::Pool_1<T>* New_ctor(int32_t  maxSize, ::System::Func_1<T>*  factory) ;

/// @brief Method Put, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Put(T  item) ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get__factory() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get__factory() ;

constexpr ::System::Collections::Generic::Stack_1<T>* const& __cordl_internal_get__items() const;

constexpr ::System::Collections::Generic::Stack_1<T>*& __cordl_internal_get__items() ;

constexpr int32_t const& __cordl_internal_get__maxSize() const;

constexpr int32_t& __cordl_internal_get__maxSize() ;

constexpr void __cordl_internal_set__factory(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set__items(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr void __cordl_internal_set__maxSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxSize, ::System::Func_1<T>*  factory) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::Dissonance::Datastructures::IRecycler_1<T>"
constexpr ::Dissonance::Datastructures::IRecycler_1<T>* i___Dissonance__Datastructures__IRecycler_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pool_1(Pool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pool_1(Pool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16939};

/// @brief Field _maxSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ____maxSize;

/// @brief Field _factory, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ____factory;

/// @brief Field _items, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<T>*  ____items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures
