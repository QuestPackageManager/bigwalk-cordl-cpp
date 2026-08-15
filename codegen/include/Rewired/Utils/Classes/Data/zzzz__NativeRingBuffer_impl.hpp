#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/NativeRingBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeRingBuffer_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::get_Capacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.get_BytesInBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::get_BytesInBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_BytesInBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.get_BufferOverrun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::get_BufferOverrun)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_BufferOverrun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.get_ReadPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::get_ReadPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_ReadPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.get_WritePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::get_WritePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_WritePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1819573c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t, bool, ::by_ref<uint32_t>)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Allocate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819565c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::System::IntPtr, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<uint32_t>)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Write)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181957030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::ArrayW<uint8_t>, int32_t, ::by_ref<int32_t>, ::by_ref<uint32_t>)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Write)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1819571c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::System::IntPtr, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Write)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181956ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Write)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181957340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::System::IntPtr, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Read)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181956d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Read)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181956bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.RandomRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::RandomRead)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181956940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"RandomRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.RandomRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::RandomRead)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181956a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"RandomRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.GetPointerFromReadPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::GetPointerFromReadPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181956890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"GetPointerFromReadPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.GetOffsetFromReadPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::GetOffsetFromReadPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181956860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"GetOffsetFromReadPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t, uint32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181956910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(::Rewired::Utils::Classes::Data::NativeRingBuffer*)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::CopyFrom)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1819566c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181956eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.zsfaSoFgYhMWqeYGgsDBHjUSHidv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::zsfaSoFgYhMWqeYGgsDBHjUSHidv)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181957450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"zsfaSoFgYhMWqeYGgsDBHjUSHidv", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.ZjKKFmuWUbhjahEADdwsQzQkUztt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(int32_t)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::ZjKKFmuWUbhjahEADdwsQzQkUztt)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181957370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"ZjKKFmuWUbhjahEADdwsQzQkUztt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.sVqdoRwZoQIkRKQjgMHcEwDzbTA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::sVqdoRwZoQIkRKQjgMHcEwDzbTA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181957430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"sVqdoRwZoQIkRKQjgMHcEwDzbTA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181956790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)()>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181956850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::NativeRingBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::NativeRingBuffer::*)(bool)>(&::Rewired::Utils::Classes::Data::NativeRingBuffer::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819567f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_TglyhmLhikuUEXRoBqZOEQhpkgjr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TglyhmLhikuUEXRoBqZOEQhpkgjr;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_TglyhmLhikuUEXRoBqZOEQhpkgjr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TglyhmLhikuUEXRoBqZOEQhpkgjr;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_TglyhmLhikuUEXRoBqZOEQhpkgjr(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TglyhmLhikuUEXRoBqZOEQhpkgjr = value;
}
constexpr int32_t& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_iwGEXNwmJxhtxniEBygGhphiXgbD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iwGEXNwmJxhtxniEBygGhphiXgbD;
}
constexpr int32_t const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_iwGEXNwmJxhtxniEBygGhphiXgbD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iwGEXNwmJxhtxniEBygGhphiXgbD;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_iwGEXNwmJxhtxniEBygGhphiXgbD(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iwGEXNwmJxhtxniEBygGhphiXgbD = value;
}
constexpr int64_t& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_yIeJDGuPPNcisSewhgPggZRmtRGS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yIeJDGuPPNcisSewhgPggZRmtRGS;
}
constexpr int64_t const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_yIeJDGuPPNcisSewhgPggZRmtRGS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yIeJDGuPPNcisSewhgPggZRmtRGS;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_yIeJDGuPPNcisSewhgPggZRmtRGS(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yIeJDGuPPNcisSewhgPggZRmtRGS = value;
}
constexpr int64_t& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_kEZcUPvnHDtboRPNoSSxlKEcfqP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kEZcUPvnHDtboRPNoSSxlKEcfqP;
}
constexpr int64_t const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_kEZcUPvnHDtboRPNoSSxlKEcfqP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kEZcUPvnHDtboRPNoSSxlKEcfqP;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_kEZcUPvnHDtboRPNoSSxlKEcfqP(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kEZcUPvnHDtboRPNoSSxlKEcfqP = value;
}
constexpr int32_t& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_EjWlQTwRVkbOioKtlAJpxjGRfEeo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EjWlQTwRVkbOioKtlAJpxjGRfEeo;
}
constexpr int32_t const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_EjWlQTwRVkbOioKtlAJpxjGRfEeo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EjWlQTwRVkbOioKtlAJpxjGRfEeo;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_EjWlQTwRVkbOioKtlAJpxjGRfEeo(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EjWlQTwRVkbOioKtlAJpxjGRfEeo = value;
}
constexpr bool& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_yziciHOkVxpunXWKJCkRsKmaKCcf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yziciHOkVxpunXWKJCkRsKmaKCcf;
}
constexpr bool const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_yziciHOkVxpunXWKJCkRsKmaKCcf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yziciHOkVxpunXWKJCkRsKmaKCcf;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_yziciHOkVxpunXWKJCkRsKmaKCcf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yziciHOkVxpunXWKJCkRsKmaKCcf = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VcrBaEzmHCyjEIxAdsOPPIFGbYkgA;
}
constexpr uint32_t const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VcrBaEzmHCyjEIxAdsOPPIFGbYkgA;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_VcrBaEzmHCyjEIxAdsOPPIFGbYkgA(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VcrBaEzmHCyjEIxAdsOPPIFGbYkgA = value;
}
constexpr bool& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_WfgFMWPpRhQOJESPNACiPbEuLFab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WfgFMWPpRhQOJESPNACiPbEuLFab;
}
constexpr bool const& Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_get_WfgFMWPpRhQOJESPNACiPbEuLFab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WfgFMWPpRhQOJESPNACiPbEuLFab;
}
constexpr void Rewired::Utils::Classes::Data::NativeRingBuffer::__cordl_internal_set_WfgFMWPpRhQOJESPNACiPbEuLFab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WfgFMWPpRhQOJESPNACiPbEuLFab = value;
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::get_BytesInBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_BytesInBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Data::NativeRingBuffer::get_BufferOverrun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_BufferOverrun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::get_ReadPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_ReadPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Data::NativeRingBuffer::get_WritePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"get_WritePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeRingBuffer::Allocate(int32_t  bufferLength, bool  zeroFill, ::by_ref<uint32_t>  passId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, bufferLength, zeroFill, passId);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Write(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToWrite, ::by_ref<int32_t>  startOffset, ::by_ref<uint32_t>  passId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferLength, numBytesToWrite, startOffset, passId);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Write(::ArrayW<uint8_t>  buffer, int32_t  numBytesToWrite, ::by_ref<int32_t>  startOffset, ::by_ref<uint32_t>  passId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, numBytesToWrite, startOffset, passId);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Write(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferLength, numBytesToWrite);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Write(::ArrayW<uint8_t>  buffer, int32_t  numBytesToWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, numBytesToWrite);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Read(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferLength, numBytesToRead);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::Read(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, numBytesToRead);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::RandomRead(::System::IntPtr  buffer, int32_t  bufferLength, int32_t  numBytesToRead, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"RandomRead", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferLength, numBytesToRead, readStartIndex);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::RandomRead(::ArrayW<uint8_t>  buffer, int32_t  numBytesToRead, int32_t  readStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"RandomRead", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, numBytesToRead, readStartIndex);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::NativeRingBuffer::GetPointerFromReadPosition(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"GetPointerFromReadPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, offset);
}
inline int32_t Rewired::Utils::Classes::Data::NativeRingBuffer::GetOffsetFromReadPosition(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"GetOffsetFromReadPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline bool Rewired::Utils::Classes::Data::NativeRingBuffer::IsValid(int32_t  startIndex, uint32_t  passId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startIndex, passId);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::CopyFrom(::Rewired::Utils::Classes::Data::NativeRingBuffer*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::zsfaSoFgYhMWqeYGgsDBHjUSHidv(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"zsfaSoFgYhMWqeYGgsDBHjUSHidv", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::ZjKKFmuWUbhjahEADdwsQzQkUztt(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"ZjKKFmuWUbhjahEADdwsQzQkUztt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::sVqdoRwZoQIkRKQjgMHcEwDzbTA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"sVqdoRwZoQIkRKQjgMHcEwDzbTA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::NativeRingBuffer::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Utils::Classes::Data::NativeRingBuffer* Rewired::Utils::Classes::Data::NativeRingBuffer::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::NativeRingBuffer*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Data::NativeRingBuffer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::NativeRingBuffer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::NativeRingBuffer::NativeRingBuffer()   {
}
