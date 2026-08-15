#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/MessageProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__MessageProcessor_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.FirstLengthByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::FirstLengthByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"FirstLengthByte", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.NeedToReadShortLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::NeedToReadShortLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"NeedToReadShortLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.NeedToReadLongLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::NeedToReadLongLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"NeedToReadLongLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.GetOpcode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::GetOpcode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetOpcode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.GetPayloadLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::GetPayloadLength)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad1560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetPayloadLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.Finished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::MessageProcessor::Finished)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad13f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"Finished", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ValidateHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, bool, bool)>(&::Mirror::SimpleWeb::MessageProcessor::ValidateHeader)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181ad1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ValidateHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ToggleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::MessageProcessor::ToggleMask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ad1960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ToggleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::Mirror::SimpleWeb::ArrayBuffer*, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::MessageProcessor::ToggleMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ToggleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::MessageProcessor::ToggleMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad18d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.GetMessageLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, uint8_t)>(&::Mirror::SimpleWeb::MessageProcessor::GetMessageLength)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetMessageLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ThrowIfMaskNotExpected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, bool)>(&::Mirror::SimpleWeb::MessageProcessor::ThrowIfMaskNotExpected)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfMaskNotExpected", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ThrowIfBadOpCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool, bool)>(&::Mirror::SimpleWeb::MessageProcessor::ThrowIfBadOpCode)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ad1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfBadOpCode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ThrowIfLengthZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::SimpleWeb::MessageProcessor::ThrowIfLengthZero)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfLengthZero", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::MessageProcessor.ThrowIfMsgLengthTooLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::Mirror::SimpleWeb::MessageProcessor::ThrowIfMsgLengthTooLong)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad1870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfMsgLengthTooLong", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint8_t Mirror::SimpleWeb::MessageProcessor::FirstLengthByte(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"FirstLengthByte", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, buffer);
}
inline bool Mirror::SimpleWeb::MessageProcessor::NeedToReadShortLength(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"NeedToReadShortLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline bool Mirror::SimpleWeb::MessageProcessor::NeedToReadLongLength(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"NeedToReadLongLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline int32_t Mirror::SimpleWeb::MessageProcessor::GetOpcode(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetOpcode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer);
}
inline int32_t Mirror::SimpleWeb::MessageProcessor::GetPayloadLength(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetPayloadLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer);
}
inline bool Mirror::SimpleWeb::MessageProcessor::Finished(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"Finished", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline void Mirror::SimpleWeb::MessageProcessor::ValidateHeader(::ArrayW<uint8_t>  buffer, int32_t  maxLength, bool  expectMask, bool  opCodeContinuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ValidateHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, maxLength, expectMask, opCodeContinuation);
}
inline void Mirror::SimpleWeb::MessageProcessor::ToggleMask(::ArrayW<uint8_t>  src, int32_t  sourceOffset, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, sourceOffset, messageLength, maskBuffer, maskOffset);
}
inline void Mirror::SimpleWeb::MessageProcessor::ToggleMask(::ArrayW<uint8_t>  src, int32_t  sourceOffset, ::Mirror::SimpleWeb::ArrayBuffer*  dst, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, sourceOffset, dst, messageLength, maskBuffer, maskOffset);
}
inline void Mirror::SimpleWeb::MessageProcessor::ToggleMask(::ArrayW<uint8_t>  src, int32_t  srcOffset, ::ArrayW<uint8_t>  dst, int32_t  dstOffset, int32_t  messageLength, ::ArrayW<uint8_t>  maskBuffer, int32_t  maskOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ToggleMask", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, messageLength, maskBuffer, maskOffset);
}
inline int32_t Mirror::SimpleWeb::MessageProcessor::GetMessageLength(::ArrayW<uint8_t>  buffer, int32_t  offset, uint8_t  lenByte)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"GetMessageLength", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, offset, lenByte);
}
inline void Mirror::SimpleWeb::MessageProcessor::ThrowIfMaskNotExpected(bool  hasMask, bool  expectMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfMaskNotExpected", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hasMask, expectMask);
}
inline void Mirror::SimpleWeb::MessageProcessor::ThrowIfBadOpCode(int32_t  opcode, bool  finished, bool  opCodeContinuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfBadOpCode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, opcode, finished, opCodeContinuation);
}
inline void Mirror::SimpleWeb::MessageProcessor::ThrowIfLengthZero(int32_t  msglen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfLengthZero", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msglen);
}
inline void Mirror::SimpleWeb::MessageProcessor::ThrowIfMsgLengthTooLong(int32_t  msglen, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::MessageProcessor*>(),
                        {"ThrowIfMsgLengthTooLong", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msglen, maxLength);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::MessageProcessor::MessageProcessor()   {
}
