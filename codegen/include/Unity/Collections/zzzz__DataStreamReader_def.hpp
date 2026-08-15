#pragma once
// IWYU pragma private; include "Unity/Collections/DataStreamReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataStreamReader)
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
struct DataStreamReader_Context;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
namespace Unity::Collections {
struct FixedString4096Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
struct StreamCompressionModel;
}
// Forward declare root types
namespace Unity::Collections {
struct DataStreamReader;
}
namespace Unity::Collections {
struct DataStreamReader_Context;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::DataStreamReader);
MARK_VAL_T(::Unity::Collections::DataStreamReader_Context);
DEFINE_IL2CPP_CLASS(::Unity::Collections::DataStreamReader, "Unity.Collections", "DataStreamReader");
DEFINE_IL2CPP_CLASS(::Unity::Collections::DataStreamReader_Context, "Unity.Collections", "DataStreamReader/Context");
// Dependencies 
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamReader/Context
struct CORDL_TYPE DataStreamReader_Context {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DataStreamReader_Context() ;

// Ctor Parameters [CppParam { name: "m_ReadByteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BitIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BitBuffer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FailedReads", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataStreamReader_Context(int32_t  m_ReadByteIndex, int32_t  m_BitIndex, uint64_t  m_BitBuffer, int32_t  m_FailedReads) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14844};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ReadByteIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ReadByteIndex;

/// @brief Field m_BitIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  m_BitIndex;

/// @brief Field m_BitBuffer, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_BitBuffer;

/// @brief Field m_FailedReads, offset: 0x10, size: 0x4, def value: None
 int32_t  m_FailedReads;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_ReadByteIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_BitIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_BitBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader_Context, m_FailedReads) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::DataStreamReader_Context) == 0x18, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies Unity.Collections.DataStreamReader::Context
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DataStreamReader
struct CORDL_TYPE DataStreamReader {
public:
// Declarations
using Context = ::Unity::Collections::DataStreamReader_Context;

 __declspec(property(get=get_HasFailedReads)) bool  HasFailedReads;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Method ByteSwap, addr 0x1816d2200, size 0x10, virtual false, abstract: false, final false
static inline int16_t ByteSwap(int16_t  val) ;

/// @brief Method ByteSwap, addr 0x1816d21f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ByteSwap(int32_t  val) ;

/// @brief Method CheckBits, addr 0x181eab940, size 0x60, virtual false, abstract: false, final false
static inline void CheckBits(int32_t  numBits) ;

/// @brief Method CheckRead, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckRead() ;

/// @brief Method FillBitBuffer, addr 0x181eab9a0, size 0x50, virtual false, abstract: false, final false
inline void FillBitBuffer() ;

/// @brief Method Flush, addr 0x181eab9f0, size 0x20, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method GetBitsRead, addr 0x181eaba10, size 0x20, virtual false, abstract: false, final false
inline int32_t GetBitsRead() ;

/// @brief Method GetBytesRead, addr 0x181eaba30, size 0x20, virtual false, abstract: false, final false
inline int32_t GetBytesRead() ;

/// @brief Method Initialize, addr 0x181eaba50, size 0x20, virtual false, abstract: false, final false
static inline void Initialize(::by_ref<::Unity::Collections::DataStreamReader>  self, ::Unity::Collections::NativeArray_1<uint8_t>  array) ;

/// @brief Method ReadByte, addr 0x181eaba70, size 0x60, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method ReadBytes, addr 0x181eabc40, size 0xb0, virtual false, abstract: false, final false
inline void ReadBytes(::Unity::Collections::NativeArray_1<uint8_t>  array) ;

/// @brief Method ReadBytes, addr 0x181eabb70, size 0xd0, virtual false, abstract: false, final false
inline void ReadBytes(::System::Span_1<uint8_t>  span) ;

/// @brief Method ReadBytesInternal, addr 0x181eabad0, size 0xa0, virtual false, abstract: false, final false
inline void ReadBytesInternal(uint8_t*  data, int32_t  length) ;

/// @brief Method ReadDouble, addr 0x181eabcf0, size 0x80, virtual false, abstract: false, final false
inline double_t ReadDouble() ;

/// @brief Method ReadFixedString, addr 0x181eac1f0, size 0x40, virtual false, abstract: false, final false
inline uint16_t ReadFixedString(::Unity::Collections::NativeArray_1<uint8_t>  array) ;

/// @brief Method ReadFixedString128, addr 0x181eabd70, size 0xc0, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString128Bytes ReadFixedString128() ;

/// @brief Method ReadFixedString32, addr 0x181eabe30, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString32Bytes ReadFixedString32() ;

/// @brief Method ReadFixedString4096, addr 0x181eabea0, size 0xf0, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString4096Bytes ReadFixedString4096() ;

/// @brief Method ReadFixedString512, addr 0x181eabf90, size 0xd0, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString512Bytes ReadFixedString512() ;

/// @brief Method ReadFixedString64, addr 0x181eac060, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString64Bytes ReadFixedString64() ;

/// @brief Method ReadFixedStringInternal, addr 0x181eac0f0, size 0x100, virtual false, abstract: false, final false
inline uint16_t ReadFixedStringInternal(uint8_t*  data, int32_t  maxLength) ;

/// @brief Method ReadFloat, addr 0x181eac230, size 0x80, virtual false, abstract: false, final false
inline float_t ReadFloat() ;

/// @brief Method ReadInt, addr 0x181eac320, size 0x60, virtual false, abstract: false, final false
inline int32_t ReadInt() ;

/// @brief Method ReadIntNetworkByteOrder, addr 0x181eac2b0, size 0x70, virtual false, abstract: false, final false
inline int32_t ReadIntNetworkByteOrder() ;

/// @brief Method ReadLong, addr 0x181eac380, size 0x70, virtual false, abstract: false, final false
inline int64_t ReadLong() ;

/// @brief Method ReadPackedDouble, addr 0x181eac510, size 0x20, virtual false, abstract: false, final false
inline double_t ReadPackedDouble(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedDoubleDelta, addr 0x181eac3f0, size 0x120, virtual false, abstract: false, final false
inline double_t ReadPackedDoubleDelta(double_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedString128Delta, addr 0x181eac530, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString128Bytes ReadPackedFixedString128Delta(::Unity::Collections::FixedString128Bytes  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedString32Delta, addr 0x181eac670, size 0xa0, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString32Bytes ReadPackedFixedString32Delta(::Unity::Collections::FixedString32Bytes  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedString4096Delta, addr 0x181eac710, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString4096Bytes ReadPackedFixedString4096Delta(::Unity::Collections::FixedString4096Bytes  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedString512Delta, addr 0x181eac850, size 0x170, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString512Bytes ReadPackedFixedString512Delta(::Unity::Collections::FixedString512Bytes  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedString64Delta, addr 0x181eac9c0, size 0xe0, virtual false, abstract: false, final false
inline ::Unity::Collections::FixedString64Bytes ReadPackedFixedString64Delta(::Unity::Collections::FixedString64Bytes  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedStringDelta, addr 0x181eacc30, size 0x70, virtual false, abstract: false, final false
inline uint16_t ReadPackedFixedStringDelta(::Unity::Collections::NativeArray_1<uint8_t>  data, ::Unity::Collections::NativeArray_1<uint8_t>  baseData, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFixedStringDeltaInternal, addr 0x181eacaa0, size 0x190, virtual false, abstract: false, final false
inline uint16_t ReadPackedFixedStringDeltaInternal(uint8_t*  data, int32_t  maxLength, uint8_t*  baseData, uint16_t  baseLength, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFloat, addr 0x181eacd60, size 0x20, virtual false, abstract: false, final false
inline float_t ReadPackedFloat(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedFloatDelta, addr 0x181eacca0, size 0xc0, virtual false, abstract: false, final false
inline float_t ReadPackedFloatDelta(float_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedInt, addr 0x181eacdc0, size 0x30, virtual false, abstract: false, final false
inline int32_t ReadPackedInt(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedIntDelta, addr 0x181eacd80, size 0x40, virtual false, abstract: false, final false
inline int32_t ReadPackedIntDelta(int32_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedLong, addr 0x181eace70, size 0x70, virtual false, abstract: false, final false
inline int64_t ReadPackedLong(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedLongDelta, addr 0x181eacdf0, size 0x80, virtual false, abstract: false, final false
inline int64_t ReadPackedLongDelta(int64_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedUInt, addr 0x181eacfd0, size 0x20, virtual false, abstract: false, final false
inline uint32_t ReadPackedUInt(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedUIntDelta, addr 0x181eacd80, size 0x40, virtual false, abstract: false, final false
inline uint32_t ReadPackedUIntDelta(uint32_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedUIntInternal, addr 0x181eacee0, size 0xf0, virtual false, abstract: false, final false
inline uint32_t ReadPackedUIntInternal(int32_t  maxSymbolLength, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedULong, addr 0x181eacff0, size 0x60, virtual false, abstract: false, final false
inline uint64_t ReadPackedULong(::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadPackedULongDelta, addr 0x181eacdf0, size 0x80, virtual false, abstract: false, final false
inline uint64_t ReadPackedULongDelta(uint64_t  baseline, ::by_ref<::Unity::Collections::StreamCompressionModel>  model) ;

/// @brief Method ReadRawBits, addr 0x181ead0a0, size 0x90, virtual false, abstract: false, final false
inline uint32_t ReadRawBits(int32_t  numbits) ;

/// @brief Method ReadRawBitsInternal, addr 0x181ead050, size 0x50, virtual false, abstract: false, final false
inline uint32_t ReadRawBitsInternal(int32_t  numbits) ;

/// @brief Method ReadShort, addr 0x181ead1a0, size 0x70, virtual false, abstract: false, final false
inline int16_t ReadShort() ;

/// @brief Method ReadShortNetworkByteOrder, addr 0x181ead130, size 0x70, virtual false, abstract: false, final false
inline int16_t ReadShortNetworkByteOrder() ;

/// @brief Method ReadUInt, addr 0x181eac320, size 0x60, virtual false, abstract: false, final false
inline uint32_t ReadUInt() ;

/// @brief Method ReadUIntNetworkByteOrder, addr 0x181eac2b0, size 0x70, virtual false, abstract: false, final false
inline uint32_t ReadUIntNetworkByteOrder() ;

/// @brief Method ReadULong, addr 0x181eac380, size 0x70, virtual false, abstract: false, final false
inline uint64_t ReadULong() ;

/// @brief Method ReadUShort, addr 0x181ead1a0, size 0x70, virtual false, abstract: false, final false
inline uint16_t ReadUShort() ;

/// @brief Method ReadUShortNetworkByteOrder, addr 0x181ead130, size 0x70, virtual false, abstract: false, final false
inline uint16_t ReadUShortNetworkByteOrder() ;

/// @brief Method SeekSet, addr 0x181ead210, size 0x30, virtual false, abstract: false, final false
inline void SeekSet(int32_t  pos) ;

/// @brief Method .ctor, addr 0x181ead240, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t>  array) ;

/// @brief Method get_HasFailedReads, addr 0x181ead290, size 0x20, virtual false, abstract: false, final false
inline bool get_HasFailedReads() ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsLittleEndian, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool get_IsLittleEndian() ;

/// @brief Method get_Length, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataStreamReader() ;

// Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "m_Context", ty: "::Unity::Collections::DataStreamReader_Context", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataStreamReader(uint8_t*  m_BufferPtr, ::Unity::Collections::DataStreamReader_Context  m_Context, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_BufferPtr, offset: 0x0, size: 0x8, def value: None
 uint8_t*  m_BufferPtr;

/// @brief Field m_Context, offset: 0x8, size: 0x18, def value: None
 ::Unity::Collections::DataStreamReader_Context  m_Context;

/// @brief Field m_Length, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DataStreamReader, m_BufferPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader, m_Context) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DataStreamReader, m_Length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::DataStreamReader) == 0x28, "Size mismatch!");

} // namespace end def Unity::Collections
