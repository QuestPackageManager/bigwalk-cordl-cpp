#pragma once
// IWYU pragma private; include "Rewired/Utils/NativeTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__NativeTools_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::NativeTools.OffsetIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::Rewired::Utils::NativeTools::OffsetIntPtr)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18190bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"OffsetIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.CopyMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, bool)>(&::Rewired::Utils::NativeTools::CopyMemory)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18190b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.CopyMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::System::IntPtr, int32_t, int32_t, int32_t, bool)>(&::Rewired::Utils::NativeTools::CopyMemory)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18190b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.CopyMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, int32_t, int32_t, bool)>(&::Rewired::Utils::NativeTools::CopyMemory)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18190b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.FillMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, uint8_t, bool)>(&::Rewired::Utils::NativeTools::FillMemory)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.FillMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, uint8_t, bool)>(&::Rewired::Utils::NativeTools::FillMemory)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x18190b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.FillMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, uint8_t, bool)>(&::Rewired::Utils::NativeTools::FillMemory)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.FillMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, bool)>(&::Rewired::Utils::NativeTools::FillMemory)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18190b6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.ZeroFillMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Rewired::Utils::NativeTools::ZeroFillMemory)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18190c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"ZeroFillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.DumpToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, int32_t, ::StringW)>(&::Rewired::Utils::NativeTools::DumpToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18190b5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"DumpToString", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::NativeTools.FreeHGlobalSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Rewired::Utils::NativeTools::FreeHGlobalSafe)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18190bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FreeHGlobalSafe", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::NativeTools::setStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "XFYjeYCIhXyEqCcqsVFYMNmiuywNA", ::Rewired::Utils::NativeTools*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Rewired::Utils::NativeTools::getStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "XFYjeYCIhXyEqCcqsVFYMNmiuywNA", ::Rewired::Utils::NativeTools*>();
}
inline ::System::IntPtr Rewired::Utils::NativeTools::OffsetIntPtr(::System::IntPtr  intPtr, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"OffsetIntPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, intPtr, offset);
}
inline bool Rewired::Utils::NativeTools::CopyMemory(::System::IntPtr  source, ::System::IntPtr  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination, sourceStartIndex, destinationStartIndex, bytesToCopy, throwOnError);
}
inline bool Rewired::Utils::NativeTools::CopyMemory(::ArrayW<uint8_t>  source, ::System::IntPtr  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination, sourceStartIndex, destinationStartIndex, bytesToCopy, throwOnError);
}
inline bool Rewired::Utils::NativeTools::CopyMemory(::System::IntPtr  source, ::ArrayW<uint8_t>  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"CopyMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination, sourceStartIndex, destinationStartIndex, bytesToCopy, throwOnError);
}
inline bool Rewired::Utils::NativeTools::FillMemory(::System::IntPtr  buffer, int32_t  length, uint8_t  value, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, length, value, throwOnError);
}
inline bool Rewired::Utils::NativeTools::FillMemory(::System::IntPtr  buffer, int32_t  startIndex, int32_t  length, uint8_t  value, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, startIndex, length, value, throwOnError);
}
inline bool Rewired::Utils::NativeTools::FillMemory(::ArrayW<uint8_t>  buffer, int32_t  length, uint8_t  value, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, length, value, throwOnError);
}
inline bool Rewired::Utils::NativeTools::FillMemory(::ArrayW<uint8_t>  buffer, int32_t  startIndex, int32_t  length, uint8_t  value, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FillMemory", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, startIndex, length, value, throwOnError);
}
inline void Rewired::Utils::NativeTools::ZeroFillMemory(::System::IntPtr  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"ZeroFillMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
inline ::StringW Rewired::Utils::NativeTools::DumpToString(::System::IntPtr  buffer, int32_t  length, ::StringW  stringFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"DumpToString", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, length, stringFormat);
}
inline void Rewired::Utils::NativeTools::FreeHGlobalSafe(::by_ref<::System::IntPtr>  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::NativeTools*>(),
                        {"FreeHGlobalSafe", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::NativeTools::NativeTools()   {
}
