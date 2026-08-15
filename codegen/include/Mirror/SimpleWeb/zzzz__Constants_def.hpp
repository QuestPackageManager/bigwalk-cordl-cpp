#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace Mirror::SimpleWeb {
class Constants;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::Constants*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::Constants*, "Mirror.SimpleWeb", "Constants");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
/// @brief Field HandshakeGUIDBytes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HandshakeGUIDBytes, put=setStaticF_HandshakeGUIDBytes)) ::ArrayW<uint8_t>  HandshakeGUIDBytes;

/// @brief Field HandshakeGUIDLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HandshakeGUIDLength, put=setStaticF_HandshakeGUIDLength)) int32_t  HandshakeGUIDLength;

/// @brief Field endOfHandshake, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_endOfHandshake, put=setStaticF_endOfHandshake)) ::ArrayW<uint8_t>  endOfHandshake;

static inline ::ArrayW<uint8_t> getStaticF_HandshakeGUIDBytes() ;

static inline int32_t getStaticF_HandshakeGUIDLength() ;

static inline ::ArrayW<uint8_t> getStaticF_endOfHandshake() ;

static inline void setStaticF_HandshakeGUIDBytes(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_HandshakeGUIDLength(int32_t  value) ;

static inline void setStaticF_endOfHandshake(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief Field BytePayloadLength offset 0xffffffff size 0x4
static constexpr int32_t  BytePayloadLength{static_cast<int32_t>(0x7d)};

/// @brief Field HandshakeGUID offset 0xffffffff size 0x8
static constexpr ::ConstString  HandshakeGUID{u"258EAFA5-E914-47DA-95CA-C5AB0DC85B11"};

/// @brief Field HeaderMinSize offset 0xffffffff size 0x4
static constexpr int32_t  HeaderMinSize{static_cast<int32_t>(0x2)};

/// @brief Field HeaderSize offset 0xffffffff size 0x4
static constexpr int32_t  HeaderSize{static_cast<int32_t>(0x4)};

/// @brief Field LongLength offset 0xffffffff size 0x4
static constexpr int32_t  LongLength{static_cast<int32_t>(0x8)};

/// @brief Field MaskSize offset 0xffffffff size 0x4
static constexpr int32_t  MaskSize{static_cast<int32_t>(0x4)};

/// @brief Field ShortLength offset 0xffffffff size 0x4
static constexpr int32_t  ShortLength{static_cast<int32_t>(0x2)};

/// @brief Field UlongPayloadLength offset 0xffffffff size 0x4
static constexpr int32_t  UlongPayloadLength{static_cast<int32_t>(0x7f)};

/// @brief Field UshortPayloadLength offset 0xffffffff size 0x4
static constexpr int32_t  UshortPayloadLength{static_cast<int32_t>(0x7e)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::Constants) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
