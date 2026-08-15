#pragma once
// IWYU pragma private; include "Mirror/NetworkWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkWriter)
namespace System::Text {
class UTF8Encoding;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Mirror {
class NetworkWriter;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkWriter*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkWriter*, "Mirror", "NetworkWriter");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkWriter
class CORDL_TYPE NetworkWriter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Field Position, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) int32_t  Position;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field encoding, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::UTF8Encoding*  encoding;

/// @brief Method EnsureCapacity, addr 0x181597490, size 0x40, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  value) ;

static inline ::Mirror::NetworkWriter* New_ctor() ;

/// @brief Method Reset, addr 0x181292ed0, size 0xff90, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToArray, addr 0x181517d50, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method ToArraySegment, addr 0x1815974d0, size 0x40, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> ToArraySegment() ;

/// @brief Method ToString, addr 0x181597510, size 0x270, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Write(T  value) ;

/// @brief Method WriteBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void WriteBlittable(T  value) ;

/// @brief Method WriteBlittableNullable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void WriteBlittableNullable(::System::Nullable_1<T>  value) ;

/// @brief Method WriteByte, addr 0x18081c6f0, size 0x46810, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteBytes, addr 0x181597810, size 0xa0, virtual false, abstract: false, final false
inline bool WriteBytes(uint8_t*  ptr, int32_t  offset, int32_t  size) ;

/// @brief Method WriteBytes, addr 0x181597780, size 0x90, virtual false, abstract: false, final false
inline void WriteBytes(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get_Position() const;

constexpr int32_t& __cordl_internal_get_Position() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::System::Text::UTF8Encoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::UTF8Encoding*& __cordl_internal_get_encoding() ;

constexpr void __cordl_internal_set_Position(int32_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_encoding(::System::Text::UTF8Encoding*  value) ;

/// @brief Method .ctor, addr 0x181597420, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Capacity, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method op_Implicit, addr 0x1815978b0, size 0x40, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint8_t> op_Implicit___System__ArraySegment_1_uint8_t_(::Mirror::NetworkWriter*  w) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkWriter(NetworkWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkWriter(NetworkWriter const& ) = delete;

/// @brief Field DefaultCapacity offset 0xffffffff size 0x4
static constexpr int32_t  DefaultCapacity{static_cast<int32_t>(0x5dc)};

/// @brief Field MaxStringLength offset 0xffffffff size 0x2
static constexpr uint16_t  MaxStringLength{static_cast<uint16_t>(0xfffeu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18344};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field Position, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Position;

/// @brief Field encoding, offset: 0x20, size: 0x8, def value: None
 ::System::Text::UTF8Encoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkWriter, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkWriter, ___Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkWriter, ___encoding) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkWriter) == 0x28, "Size mismatch!");

} // namespace end def Mirror
