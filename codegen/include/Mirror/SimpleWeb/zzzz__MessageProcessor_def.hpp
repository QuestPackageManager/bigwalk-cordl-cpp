#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/MessageProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageProcessor)
namespace Mirror::SimpleWeb {
class ArrayBuffer;
}
// Forward declare root types
namespace Mirror::SimpleWeb {
class MessageProcessor;
}
// Write type traits
MARK_REF_T(::Mirror::SimpleWeb::MessageProcessor*);
DEFINE_IL2CPP_CLASS(::Mirror::SimpleWeb::MessageProcessor*, "Mirror.SimpleWeb", "MessageProcessor");
// Dependencies System.Object
namespace Mirror::SimpleWeb {
// Is value type: false
// CS Name: Mirror.SimpleWeb.MessageProcessor
class CORDL_TYPE MessageProcessor : public ::System::Object {
public:
// Declarations
/// @brief Method Finished, addr 0x181ad13f0, size 0x20, virtual false, abstract: false, final false
static inline bool Finished(::ArrayW<uint8_t>  buffer) ;

/// @brief Method FirstLengthByte, addr 0x181ad1410, size 0x20, virtual false, abstract: false, final false
static inline uint8_t FirstLengthByte(::ArrayW<uint8_t>  buffer) ;

/// @brief Method GetMessageLength, addr 0x181ad1430, size 0x110, virtual false, abstract: false, final false
static inline int32_t GetMessageLength(::ArrayW<uint8_t>  buffer, int32_t  offset, uint8_t  lenByte) ;

/// @brief Method GetOpcode, addr 0x181ad1540, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetOpcode(::ArrayW<uint8_t>  buffer) ;

/// @brief Method GetPayloadLength, addr 0x181ad1560, size 0xf0, virtual false, abstract: false, final false
static inline int32_t GetPayloadLength(::ArrayW<uint8_t>  buffer) ;

/// @brief Method NeedToReadLongLength, addr 0x181ad1650, size 0x20, virtual false, abstract: false, final false
static inline bool NeedToReadLongLength(::ArrayW<uint8_t>  buffer) ;

/// @brief Method NeedToReadShortLength, addr 0x181ad1670, size 0x20, virtual false, abstract: false, final false
static inline bool NeedToReadShortLength(::ArrayW<uint8_t>  buffer) ;

/// @brief Method ThrowIfBadOpCode, addr 0x181ad1690, size 0xe0, virtual false, abstract: false, final false
static inline void ThrowIfBadOpCode(int32_t  opcode, bool  finished, bool  opCodeContinuation) ;

/// @brief Method ThrowIfLengthZero, addr 0x181ad1770, size 0x60, virtual false, abstract: false, final false
static inline void ThrowIfLengthZero(int32_t  msglen) ;

/// @brief Method ThrowIfMaskNotExpected, addr 0x181ad17d0, size 0xa0, virtual false, abstract: false, final false
static inline void ThrowIfMaskNotExpected(bool  hasMask, bool  expectMask) ;

/// @brief Method ThrowIfMsgLengthTooLong, addr 0x181ad1870, size 0x60, virtual false, abstract: false, final false
static inline void ThrowIfMsgLengthTooLong(int32_t  msglen, int32_t  maxLength) ;

/// @brief Method ToggleMask, addr 0x181ad19d0, size 0x90, virtual false, abstract: false, final false
static inline void ToggleMask(::ArrayW<uint8_t>  src, int32_t  sourceOffset, ::Mirror::SimpleWeb::ArrayBuffer*  dst, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset) ;

/// @brief Method ToggleMask, addr 0x181ad1960, size 0x70, virtual false, abstract: false, final false
static inline void ToggleMask(::ArrayW<uint8_t>  src, int32_t  sourceOffset, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset) ;

/// @brief Method ToggleMask, addr 0x181ad18d0, size 0x90, virtual false, abstract: false, final false
static inline void ToggleMask(::ArrayW<uint8_t>  src, int32_t  srcOffset, ::ArrayW<uint8_t>  dst, int32_t  dstOffset, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset) ;

/// @brief Method ValidateHeader, addr 0x181ad1a60, size 0x240, virtual false, abstract: false, final false
static inline void ValidateHeader(::ArrayW<uint8_t>  buffer, int32_t  maxLength, bool  expectMask, bool  opCodeContinuation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageProcessor(MessageProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageProcessor(MessageProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20528};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::SimpleWeb::MessageProcessor) == 0x10, "Size mismatch!");

} // namespace end def Mirror::SimpleWeb
