#pragma once
// IWYU pragma private; include "MA/Flora/SetBitReverseEnumerator_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetBitReverseEnumerator_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
template<typename TIndexType>
struct SetBitReverseEnumerator_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::SetBitReverseEnumerator_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::SetBitReverseEnumerator_1, "MA.Flora", "SetBitReverseEnumerator`1");
// Dependencies 
namespace MA::Flora {
// cpp template
template<typename TIndexType>
// Is value type: true
// CS Name: MA.Flora.SetBitReverseEnumerator`1<TIndexType>
struct CORDL_TYPE SetBitReverseEnumerator_1 {
public:
// Declarations
 __declspec(property(get=get_Current)) TIndexType  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TIndexType>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TIndexType>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TIndexType>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TIndexType>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitReverseEnumerator_1<TIndexType> GetEnumerator() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.Generic.IEnumerable<TIndexType>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<TIndexType>* System_Collections_Generic_IEnumerable_TIndexType__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint64_t*  chunks, int32_t  index, int32_t  count) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TIndexType get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TIndexType>"
constexpr ::System::Collections::Generic::IEnumerable_1<TIndexType>* i___System__Collections__Generic__IEnumerable_1_TIndexType_() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TIndexType>"
constexpr ::System::Collections::Generic::IEnumerator_1<TIndexType>* i___System__Collections__Generic__IEnumerator_1_TIndexType_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetBitReverseEnumerator_1() ;

// Ctor Parameters [CppParam { name: "m_Chunks", ty: "uint64_t*", modifiers: "", def_value: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Mask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_RemainingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_UnscannedBitMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BaseBitIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SetBitReverseEnumerator_1(uint64_t*  m_Chunks, int32_t  m_Start, int32_t  m_End, int32_t  m_ChunkIndex, uint64_t  m_Mask, uint64_t  m_RemainingMask, uint64_t  m_UnscannedBitMask, int32_t  m_Index, int32_t  m_BaseBitIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12900};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Chunks, offset: 0x0, size: 0x8, def value: None
 uint64_t*  m_Chunks;

/// @brief Field m_Start, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Start;

/// @brief Field m_End, offset: 0xc, size: 0x4, def value: None
 int32_t  m_End;

/// @brief Field m_ChunkIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_ChunkIndex;

/// @brief Field m_Mask, offset: 0x18, size: 0x8, def value: None
 uint64_t  m_Mask;

/// @brief Field m_RemainingMask, offset: 0x20, size: 0x8, def value: None
 uint64_t  m_RemainingMask;

/// @brief Field m_UnscannedBitMask, offset: 0x28, size: 0x8, def value: None
 uint64_t  m_UnscannedBitMask;

/// @brief Field m_Index, offset: 0x30, size: 0x4, def value: None
 int32_t  m_Index;

/// @brief Field m_BaseBitIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  m_BaseBitIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
