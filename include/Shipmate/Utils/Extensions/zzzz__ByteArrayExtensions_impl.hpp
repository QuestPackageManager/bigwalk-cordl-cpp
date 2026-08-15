#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/ByteArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Utils/Extensions/zzzz__ByteArrayExtensions_def.hpp"
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.IsIdentical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::IsIdentical)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aca920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"IsIdentical", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aca780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Clear", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Prepend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Prepend)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181aca9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Prepend", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Append
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Append)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181aca700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Append", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Copy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.ToHexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::ToHexString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181acaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Flip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Flip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181aca8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Flip", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Subarray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Subarray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Subarray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.ToBase64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::ToBase64)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181acaa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"ToBase64", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmate::Utils::Extensions::ByteArrayExtensions.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Shipmate::Utils::Extensions::ByteArrayExtensions::Pack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aca980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Pack", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmate::Utils::Extensions::ByteArrayExtensions::setStaticF_EMPTY_BUFFER(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EMPTY_BUFFER", ::Shipmate::Utils::Extensions::ByteArrayExtensions*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::getStaticF_EMPTY_BUFFER()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EMPTY_BUFFER", ::Shipmate::Utils::Extensions::ByteArrayExtensions*>();
}
inline bool Shipmate::Utils::Extensions::ByteArrayExtensions::IsIdentical(::ArrayW<uint8_t>  aBytes1, ::ArrayW<uint8_t>  aBytes2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"IsIdentical", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aBytes1, aBytes2);
}
inline void Shipmate::Utils::Extensions::ByteArrayExtensions::Clear(::ArrayW<uint8_t>  aBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Clear", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aBytes);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Prepend(::ArrayW<uint8_t>  aBytes, ::ArrayW<uint8_t>  aToPrepend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Prepend", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aToPrepend);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Append(::ArrayW<uint8_t>  aBytes, ::ArrayW<uint8_t>  aToAppend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Append", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aToAppend);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Copy(::ArrayW<uint8_t>  aBytes, int32_t  aOffset, int32_t  aLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aOffset, aLength);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Copy(::ArrayW<uint8_t>  aBytes, int32_t  aOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aOffset);
}
inline ::StringW Shipmate::Utils::Extensions::ByteArrayExtensions::ToHexString(::ArrayW<uint8_t>  aBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"ToHexString", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, aBytes);
}
inline void Shipmate::Utils::Extensions::ByteArrayExtensions::Flip(::ArrayW<uint8_t>  aBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Flip", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aBytes);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Subarray(::ArrayW<uint8_t>  aBytes, int32_t  aStart, int32_t  aLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Subarray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aStart, aLength);
}
inline ::StringW Shipmate::Utils::Extensions::ByteArrayExtensions::ToBase64(::ArrayW<uint8_t>  aBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"ToBase64", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, aBytes);
}
inline ::ArrayW<uint8_t> Shipmate::Utils::Extensions::ByteArrayExtensions::Pack(::ArrayW<uint8_t>  aBytes, int32_t  aTotalBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::ByteArrayExtensions*>(),
                        {"Pack", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, aBytes, aTotalBits);
}
// Ctor Parameters []
constexpr ::Shipmate::Utils::Extensions::ByteArrayExtensions::ByteArrayExtensions()   {
}
