#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.get_Pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::get_Pointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::get_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181956370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t, uint8_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::set_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819563a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181956360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.GetPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::GetPointer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819553e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"GetPointer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.DumpToHexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::DumpToHexString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181955300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"DumpToHexString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t, uint8_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadBit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181955430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819554a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819555e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadUShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819555e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadUShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadUInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadUInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadLong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819555a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadLong", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadULong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819555a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadULong", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadFloat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ReadDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::ReadDouble)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819554e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadDouble", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Read)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181955620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Read)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181955780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.TryReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::TryReadBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181955bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryReadBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.TryReadBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::TryReadBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181955c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryReadBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.WriteBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t, uint8_t, bool)>(&::Rewired::Utils::Classes::Data::NativeBuffer::WriteBit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181955e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"WriteBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(uint8_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819562e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int16_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819562a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(uint16_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819562a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(uint32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int64_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(uint64_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181955f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(float_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181956100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(double_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181956320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181956140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Write)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181955f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.TryWriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::TryWriteBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181955dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.TryWriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::TryWriteBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181955d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.TryFill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeBuffer::*)(uint8_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeBuffer::TryFill)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181955b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryFill", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::NativeBuffer::*)(int32_t, bool)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Resize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181955930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::Clear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181955150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819558f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(::Rewired::Utils::Classes::Data::NativeBuffer*)>(&::Rewired::Utils::Classes::Data::NativeBuffer::CopyFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181955170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181955ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::Dispose)> {
  constexpr static std::size_t size = 0x5510;
  constexpr static std::size_t addrs = 0x180e6eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeBuffer::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815bcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeBuffer::*)(bool)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819552c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Rewired::Utils::Classes::Data::NativeBuffer*)>(&::Rewired::Utils::Classes::Data::NativeBuffer::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x59cf0;
  constexpr static std::size_t addrs = 0x180912770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeBuffer.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Utils::Classes::Data::NativeBuffer*, ::Rewired::Utils::Classes::Data::NativeBuffer*)>(&::Rewired::Utils::Classes::Data::NativeBuffer::Copy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819551f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_VVCYutVLUrnxFRahWgEWiudKyeRg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VVCYutVLUrnxFRahWgEWiudKyeRg;
}
constexpr ::System::IntPtr const& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_VVCYutVLUrnxFRahWgEWiudKyeRg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VVCYutVLUrnxFRahWgEWiudKyeRg;
}
constexpr void Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_set_VVCYutVLUrnxFRahWgEWiudKyeRg(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VVCYutVLUrnxFRahWgEWiudKyeRg = value;
}
constexpr int32_t& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_lpEECKpTiIynpmyLOjTgSQTrZwJK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lpEECKpTiIynpmyLOjTgSQTrZwJK;
}
constexpr int32_t const& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_lpEECKpTiIynpmyLOjTgSQTrZwJK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lpEECKpTiIynpmyLOjTgSQTrZwJK;
}
constexpr void Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_set_lpEECKpTiIynpmyLOjTgSQTrZwJK(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lpEECKpTiIynpmyLOjTgSQTrZwJK = value;
}
constexpr bool& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_qbqbooAbgyWRsBeZdCbRGLZpfNAz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qbqbooAbgyWRsBeZdCbRGLZpfNAz;
}
constexpr bool const& Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_get_qbqbooAbgyWRsBeZdCbRGLZpfNAz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qbqbooAbgyWRsBeZdCbRGLZpfNAz;
}
constexpr void Rewired::Utils::Classes::Data::NativeBuffer::__cordl_internal_set_qbqbooAbgyWRsBeZdCbRGLZpfNAz(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qbqbooAbgyWRsBeZdCbRGLZpfNAz = value;
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeBuffer::get_Pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t Rewired::Utils::Classes::Data::NativeBuffer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, index);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::set_Item(int32_t  index, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeBuffer::GetPointer(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"GetPointer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, offset);
}
inline ::StringW Rewired::Utils::Classes::Data::NativeBuffer::DumpToHexString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"DumpToHexString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::NativeBuffer::ReadBit(int32_t  byteIndex, uint8_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, byteIndex, bit);
}
inline uint8_t Rewired::Utils::Classes::Data::NativeBuffer::ReadByte(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, startIndex);
}
inline int16_t Rewired::Utils::Classes::Data::NativeBuffer::ReadShort(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, startIndex);
}
inline uint16_t Rewired::Utils::Classes::Data::NativeBuffer::ReadUShort(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadUShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, startIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::ReadInt(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startIndex);
}
inline uint32_t Rewired::Utils::Classes::Data::NativeBuffer::ReadUInt(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadUInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, startIndex);
}
inline int64_t Rewired::Utils::Classes::Data::NativeBuffer::ReadLong(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadLong", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, startIndex);
}
inline uint64_t Rewired::Utils::Classes::Data::NativeBuffer::ReadULong(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadULong", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, startIndex);
}
inline float_t Rewired::Utils::Classes::Data::NativeBuffer::ReadFloat(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, startIndex);
}
inline double_t Rewired::Utils::Classes::Data::NativeBuffer::ReadDouble(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"ReadDouble", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Read(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, numBytesToRead, readStartIndex, writeStartIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Read(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferLength, numBytesToRead, readStartIndex, writeStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::TryReadBytes(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryReadBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, numBytesToRead, readStartIndex, writeStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::TryReadBytes(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex, int32_t  writeStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryReadBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferLength, numBytesToRead, readStartIndex, writeStartIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::WriteBit(int32_t  byteIndex, uint8_t  bit, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"WriteBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteIndex, bit, value);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(uint8_t  byte, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byte, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(int16_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(uint16_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(int32_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(uint32_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(int64_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(uint64_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(float_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(double_t  bytes, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, startIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(::ArrayW<uint8_t>  bytes, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, numBytesToWrite, writeStartIndex, readStartIndex);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Write(::System::IntPtr  bytes, int32_t  bufferLength, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, bufferLength, numBytesToWrite, writeStartIndex, readStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::TryWriteBytes(::ArrayW<uint8_t>  bytes, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, numBytesToWrite, writeStartIndex, readStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::TryWriteBytes(::System::IntPtr  bytes, int32_t  bufferLength, int32_t  numBytesToWrite, int32_t  writeStartIndex, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, bufferLength, numBytesToWrite, writeStartIndex, readStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeBuffer::TryFill(uint8_t  value, int32_t  numBytesToWrite, int32_t  writeStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"TryFill", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, numBytesToWrite, writeStartIndex);
}
inline bool Rewired::Utils::Classes::Data::NativeBuffer::Resize(int32_t  size, bool  preserveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Resize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size, preserveData);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::CopyFrom(::Rewired::Utils::Classes::Data::NativeBuffer*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::StringW Rewired::Utils::Classes::Data::NativeBuffer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeBuffer::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeBuffer::op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Data::NativeBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, buffer);
}
inline bool Rewired::Utils::Classes::Data::NativeBuffer::Copy(::Rewired::Utils::Classes::Data::NativeBuffer*  source, ::Rewired::Utils::Classes::Data::NativeBuffer*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(),
                        {"Copy", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination);
}
inline ::Rewired::Utils::Classes::Data::NativeBuffer* Rewired::Utils::Classes::Data::NativeBuffer::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::NativeBuffer*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Data::NativeBuffer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::NativeBuffer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer::NativeBuffer()   {
}
