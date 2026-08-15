#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBuffer)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
class NativeBuffer;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Data::NativeBuffer*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::NativeBuffer*, "Rewired.Utils.Classes.Data", "NativeBuffer");
// Dependencies System.IntPtr, System.Object
namespace Rewired::Utils::Classes::Data {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Data.NativeBuffer
class CORDL_TYPE NativeBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Pointer)) ::System::IntPtr  Pointer;

/// @brief Field VVCYutVLUrnxFRahWgEWiudKyeRg, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_VVCYutVLUrnxFRahWgEWiudKyeRg, put=__cordl_internal_set_VVCYutVLUrnxFRahWgEWiudKyeRg)) ::System::IntPtr  VVCYutVLUrnxFRahWgEWiudKyeRg;

/// @brief Field lpEECKpTiIynpmyLOjTgSQTrZwJK, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_lpEECKpTiIynpmyLOjTgSQTrZwJK, put=__cordl_internal_set_lpEECKpTiIynpmyLOjTgSQTrZwJK)) int32_t  lpEECKpTiIynpmyLOjTgSQTrZwJK;

/// @brief Field qbqbooAbgyWRsBeZdCbRGLZpfNAz, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_qbqbooAbgyWRsBeZdCbRGLZpfNAz, put=__cordl_internal_set_qbqbooAbgyWRsBeZdCbRGLZpfNAz)) bool  qbqbooAbgyWRsBeZdCbRGLZpfNAz;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0x181955150, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Copy, addr 0x1819551f0, size 0xd0, virtual false, abstract: false, final false
static inline bool Copy(::Rewired::Utils::Classes::Data::NativeBuffer*  source, ::Rewired::Utils::Classes::Data::NativeBuffer*  destination) ;

/// @brief Method CopyFrom, addr 0x181955170, size 0x80, virtual false, abstract: false, final false
inline void CopyFrom(::Rewired::Utils::Classes::Data::NativeBuffer*  other) ;

/// @brief Method Dispose, addr 0x180e6eca0, size 0x5510, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1819552c0, size 0x40, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DumpToHexString, addr 0x181955300, size 0xe0, virtual false, abstract: false, final false
inline ::StringW DumpToHexString() ;

/// @brief Method Finalize, addr 0x1815bcac0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetPointer, addr 0x1819553e0, size 0x50, virtual false, abstract: false, final false
inline ::System::IntPtr GetPointer(int32_t  offset) ;

static inline ::Rewired::Utils::Classes::Data::NativeBuffer* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Read, addr 0x181955620, size 0x160, virtual false, abstract: false, final false
inline void Read(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex) ;

/// @brief Method Read, addr 0x181955780, size 0x170, virtual false, abstract: false, final false
inline void Read(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex) ;

/// @brief Method ReadBit, addr 0x181955430, size 0x70, virtual false, abstract: false, final false
inline bool ReadBit(int32_t  byteIndex, uint8_t  bit) ;

/// @brief Method ReadByte, addr 0x1819554a0, size 0x40, virtual false, abstract: false, final false
inline uint8_t ReadByte(int32_t  startIndex) ;

/// @brief Method ReadDouble, addr 0x1819554e0, size 0x40, virtual false, abstract: false, final false
inline double_t ReadDouble(int32_t  startIndex) ;

/// @brief Method ReadFloat, addr 0x181955520, size 0x40, virtual false, abstract: false, final false
inline float_t ReadFloat(int32_t  startIndex) ;

/// @brief Method ReadInt, addr 0x181955560, size 0x40, virtual false, abstract: false, final false
inline int32_t ReadInt(int32_t  startIndex) ;

/// @brief Method ReadLong, addr 0x1819555a0, size 0x40, virtual false, abstract: false, final false
inline int64_t ReadLong(int32_t  startIndex) ;

/// @brief Method ReadShort, addr 0x1819555e0, size 0x40, virtual false, abstract: false, final false
inline int16_t ReadShort(int32_t  startIndex) ;

/// @brief Method ReadUInt, addr 0x181955560, size 0x40, virtual false, abstract: false, final false
inline uint32_t ReadUInt(int32_t  startIndex) ;

/// @brief Method ReadULong, addr 0x1819555a0, size 0x40, virtual false, abstract: false, final false
inline uint64_t ReadULong(int32_t  startIndex) ;

/// @brief Method ReadUShort, addr 0x1819555e0, size 0x40, virtual false, abstract: false, final false
inline uint16_t ReadUShort(int32_t  startIndex) ;

/// @brief Method Release, addr 0x1819558f0, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Resize, addr 0x181955930, size 0x1a0, virtual false, abstract: false, final false
inline bool Resize(int32_t  size, bool  preserveData) ;

/// @brief Method ToString, addr 0x181955ad0, size 0xc0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryFill, addr 0x181955b90, size 0x60, virtual false, abstract: false, final false
inline int32_t TryFill(uint8_t  value, int32_t  numBytesToWrite, int32_t  writeStartIndex) ;

/// @brief Method TryReadBytes, addr 0x181955bf0, size 0xa0, virtual false, abstract: false, final false
inline int32_t TryReadBytes(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex) ;

/// @brief Method TryReadBytes, addr 0x181955c90, size 0xa0, virtual false, abstract: false, final false
inline int32_t TryReadBytes(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex) ;

/// @brief Method TryWriteBytes, addr 0x181955dd0, size 0xa0, virtual false, abstract: false, final false
inline int32_t TryWriteBytes(::ArrayW<uint8_t>  bytes, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex) ;

/// @brief Method TryWriteBytes, addr 0x181955d30, size 0xa0, virtual false, abstract: false, final false
inline int32_t TryWriteBytes(::System::IntPtr  bytes, int32_t  bufferLength, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex) ;

/// @brief Method Write, addr 0x1819562e0, size 0x40, virtual false, abstract: false, final false
inline void Write(uint8_t  byte, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181956140, size 0x160, virtual false, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  bytes, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex) ;

/// @brief Method Write, addr 0x181955f90, size 0x170, virtual false, abstract: false, final false
inline void Write(::System::IntPtr  bytes, int32_t  bufferLength, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex) ;

/// @brief Method Write, addr 0x181956320, size 0x40, virtual false, abstract: false, final false
inline void Write(double_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181956100, size 0x40, virtual false, abstract: false, final false
inline void Write(float_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x1819562a0, size 0x40, virtual false, abstract: false, final false
inline void Write(int16_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181955f50, size 0x40, virtual false, abstract: false, final false
inline void Write(int32_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181955f10, size 0x40, virtual false, abstract: false, final false
inline void Write(int64_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x1819562a0, size 0x40, virtual false, abstract: false, final false
inline void Write(uint16_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181955f50, size 0x40, virtual false, abstract: false, final false
inline void Write(uint32_t  bytes, int32_t  startIndex) ;

/// @brief Method Write, addr 0x181955f10, size 0x40, virtual false, abstract: false, final false
inline void Write(uint64_t  bytes, int32_t  startIndex) ;

/// @brief Method WriteBit, addr 0x181955e70, size 0xa0, virtual false, abstract: false, final false
inline void WriteBit(int32_t  byteIndex, uint8_t  bit, bool  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_VVCYutVLUrnxFRahWgEWiudKyeRg() const;

constexpr ::System::IntPtr& __cordl_internal_get_VVCYutVLUrnxFRahWgEWiudKyeRg() ;

constexpr int32_t const& __cordl_internal_get_lpEECKpTiIynpmyLOjTgSQTrZwJK() const;

constexpr int32_t& __cordl_internal_get_lpEECKpTiIynpmyLOjTgSQTrZwJK() ;

constexpr bool const& __cordl_internal_get_qbqbooAbgyWRsBeZdCbRGLZpfNAz() const;

constexpr bool& __cordl_internal_get_qbqbooAbgyWRsBeZdCbRGLZpfNAz() ;

constexpr void __cordl_internal_set_VVCYutVLUrnxFRahWgEWiudKyeRg(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_lpEECKpTiIynpmyLOjTgSQTrZwJK(int32_t  value) ;

constexpr void __cordl_internal_set_qbqbooAbgyWRsBeZdCbRGLZpfNAz(bool  value) ;

/// @brief Method .ctor, addr 0x181956360, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Item, addr 0x181956370, size 0x30, virtual false, abstract: false, final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Pointer, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_Pointer() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x180912770, size 0x59cf0, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Data::NativeBuffer*  buffer) ;

/// @brief Method set_Item, addr 0x1819563a0, size 0x30, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeBuffer(NativeBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeBuffer(NativeBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3034};

/// @brief Field VVCYutVLUrnxFRahWgEWiudKyeRg, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___VVCYutVLUrnxFRahWgEWiudKyeRg;

/// @brief Field lpEECKpTiIynpmyLOjTgSQTrZwJK, offset: 0x18, size: 0x4, def value: None
 int32_t  ___lpEECKpTiIynpmyLOjTgSQTrZwJK;

/// @brief Field qbqbooAbgyWRsBeZdCbRGLZpfNAz, offset: 0x1c, size: 0x1, def value: None
 bool  ___qbqbooAbgyWRsBeZdCbRGLZpfNAz;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeBuffer, ___VVCYutVLUrnxFRahWgEWiudKyeRg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeBuffer, ___lpEECKpTiIynpmyLOjTgSQTrZwJK) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::NativeBuffer, ___qbqbooAbgyWRsBeZdCbRGLZpfNAz) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::NativeBuffer) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
