#pragma once
// IWYU pragma private; include "Mirror/NetworkReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkReader)
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
class NetworkReader;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkReader*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkReader*, "Mirror", "NetworkReader");
// Dependencies System.ArraySegment`1<T>, System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkReader
class CORDL_TYPE NetworkReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Field Position, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Position, put=__cordl_internal_set_Position)) int32_t  Position;

 __declspec(property(get=get_Remaining)) int32_t  Remaining;

/// @brief Field buffer, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::System::ArraySegment_1<uint8_t>  buffer;

/// @brief Field encoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::UTF8Encoding*  encoding;

static inline ::Mirror::NetworkReader* New_ctor(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Read() ;

/// @brief Method ReadBlittable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T ReadBlittable() ;

/// @brief Method ReadBlittableNullable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Nullable_1<T> ReadBlittableNullable() ;

/// @brief Method ReadByte, addr 0x18154c680, size 0x10, virtual false, abstract: false, final false
inline uint8_t ReadByte() ;

/// @brief Method ReadBytes, addr 0x18154c780, size 0x190, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBytes(::ArrayW<uint8_t>  bytes, int32_t  count) ;

/// @brief Method ReadBytesSegment, addr 0x18154c690, size 0xf0, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> ReadBytesSegment(int32_t  count) ;

/// @brief Method SetBuffer, addr 0x18154c910, size 0x30, virtual false, abstract: false, final false
inline void SetBuffer(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method ToString, addr 0x18154c940, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Position() const;

constexpr int32_t& __cordl_internal_get_Position() ;

constexpr ::System::ArraySegment_1<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::System::ArraySegment_1<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::System::Text::UTF8Encoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::UTF8Encoding*& __cordl_internal_get_encoding() ;

constexpr void __cordl_internal_set_Position(int32_t  value) ;

constexpr void __cordl_internal_set_buffer(::System::ArraySegment_1<uint8_t>  value) ;

constexpr void __cordl_internal_set_encoding(::System::Text::UTF8Encoding*  value) ;

/// @brief Method .ctor, addr 0x18154c5a0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method get_Capacity, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Remaining, addr 0x18154c9d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Remaining() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkReader(NetworkReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkReader(NetworkReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18333};

/// @brief Field buffer, offset: 0x10, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  ___buffer;

/// @brief Field Position, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Position;

/// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
 ::System::Text::UTF8Encoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkReader, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkReader, ___Position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkReader, ___encoding) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkReader) == 0x30, "Size mismatch!");

} // namespace end def Mirror
