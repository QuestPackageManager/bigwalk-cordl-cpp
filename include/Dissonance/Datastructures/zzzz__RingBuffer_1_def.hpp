#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
template<typename T>
class RingBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Datastructures::RingBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Datastructures::RingBuffer_1, "Dissonance.Datastructures", "RingBuffer`1");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Dissonance.Datastructures.RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

/// @brief Field <Count>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field _end, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) int32_t  _end;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::ArrayW<T>  _items;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<T> Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Dissonance::Datastructures::RingBuffer_1<T>* New_ctor(uint32_t  size) ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__end() const;

constexpr int32_t& __cordl_internal_get__end() ;

constexpr ::ArrayW<T> const& __cordl_internal_get__items() const;

constexpr ::ArrayW<T>& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__end(int32_t  value) ;

constexpr void __cordl_internal_set__items(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint32_t  size) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16941};

/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____items;

/// @brief Field <Count>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// @brief Field _end, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Datastructures
