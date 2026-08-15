#pragma once
// IWYU pragma private; include "MA/Flora/SetBitChunkEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetBitChunkEnumerator)
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
struct SetBitChunkEnumerator;
}
// Write type traits
MARK_VAL_T(::MA::Flora::SetBitChunkEnumerator);
DEFINE_IL2CPP_CLASS(::MA::Flora::SetBitChunkEnumerator, "MA.Flora", "SetBitChunkEnumerator");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SetBitChunkEnumerator
struct CORDL_TYPE SetBitChunkEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0x181455140, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitChunkEnumerator GetEnumerator() ;

/// @brief Method MoveNext, addr 0x181455160, size 0x50, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x1814551b0, size 0x10, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x181462180, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181462180, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180ce52f0, size 0xaa90, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x1814551c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint64_t*  chunks, int32_t  chunkStart, int32_t  chunkCount) ;

/// @brief Method get_Current, addr 0x1803924b0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetBitChunkEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Chunks", ty: "uint64_t*", modifiers: "", def_value: None }, CppParam { name: "m_ChunkStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SetBitChunkEnumerator(uint64_t*  m_Chunks, int32_t  m_ChunkStart, int32_t  m_ChunkCount, int32_t  m_ChunkIndex, int32_t  m_Current) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Chunks, offset: 0x0, size: 0x8, def value: None
 uint64_t*  m_Chunks;

/// @brief Field m_ChunkStart, offset: 0x8, size: 0x4, def value: None
 int32_t  m_ChunkStart;

/// @brief Field m_ChunkCount, offset: 0xc, size: 0x4, def value: None
 int32_t  m_ChunkCount;

/// @brief Field m_ChunkIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_ChunkIndex;

/// @brief Field m_Current, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SetBitChunkEnumerator, m_Chunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SetBitChunkEnumerator, m_ChunkStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SetBitChunkEnumerator, m_ChunkCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SetBitChunkEnumerator, m_ChunkIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SetBitChunkEnumerator, m_Current) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SetBitChunkEnumerator) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
