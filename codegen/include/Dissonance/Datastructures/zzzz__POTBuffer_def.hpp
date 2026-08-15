#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/POTBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(POTBuffer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
class POTBuffer;
}
// Write type traits
MARK_REF_T(::Dissonance::Datastructures::POTBuffer*);
DEFINE_IL2CPP_CLASS(::Dissonance::Datastructures::POTBuffer*, "Dissonance.Datastructures", "POTBuffer");
// Dependencies System.Object
namespace Dissonance::Datastructures {
// Is value type: false
// CS Name: Dissonance.Datastructures.POTBuffer
class CORDL_TYPE POTBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) uint32_t  Count;

 __declspec(property(get=get_MaxCount, put=set_MaxCount)) uint32_t  MaxCount;

 __declspec(property(get=get_Pow2)) uint32_t  Pow2;

/// @brief Field <Count>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) uint32_t  _Count_k__BackingField;

/// @brief Field <MaxCount>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxCount_k__BackingField, put=__cordl_internal_set__MaxCount_k__BackingField)) uint32_t  _MaxCount_k__BackingField;

/// @brief Field _buffers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffers, put=__cordl_internal_set__buffers)) ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  _buffers;

/// @brief Method Alloc, addr 0x1805e1a60, size 0x30, virtual false, abstract: false, final false
inline void Alloc(uint32_t  count) ;

/// @brief Method Expand, addr 0x1805e1a90, size 0xf0, virtual false, abstract: false, final false
inline bool Expand(int32_t  limit) ;

/// @brief Method Free, addr 0x1805e1b80, size 0x10, virtual false, abstract: false, final false
inline void Free() ;

/// @brief Method GetBuffer, addr 0x1805e1b90, size 0x150, virtual false, abstract: false, final false
inline ::ArrayW<float_t> GetBuffer(::by_ref<uint32_t>  count, bool  zeroed) ;

static inline ::Dissonance::Datastructures::POTBuffer* New_ctor(uint8_t  initialMaxPow) ;

constexpr uint32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr uint32_t const& __cordl_internal_get__MaxCount_k__BackingField() const;

constexpr uint32_t& __cordl_internal_get__MaxCount_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& __cordl_internal_get__buffers() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& __cordl_internal_get__buffers() ;

constexpr void __cordl_internal_set__Count_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__MaxCount_k__BackingField(uint32_t  value) ;

constexpr void __cordl_internal_set__buffers(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value) ;

/// @brief Method .ctor, addr 0x1805e1ce0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(uint8_t  initialMaxPow) ;

/// @brief Method get_Count, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Count() ;

/// @brief Method get_MaxCount, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxCount() ;

/// @brief Method get_Pow2, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline uint32_t get_Pow2() ;

/// @brief Method set_Count, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_Count(uint32_t  value) ;

/// @brief Method set_MaxCount, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_MaxCount(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr POTBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "POTBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
POTBuffer(POTBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "POTBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
POTBuffer(POTBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16937};

/// @brief Field _buffers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  ____buffers;

/// @brief Field <MaxCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____MaxCount_k__BackingField;

/// @brief Field <Count>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Datastructures::POTBuffer, ____buffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Datastructures::POTBuffer, ____MaxCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Datastructures::POTBuffer, ____Count_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Datastructures::POTBuffer) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Datastructures
