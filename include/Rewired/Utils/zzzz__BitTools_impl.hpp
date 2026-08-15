#pragma once
// IWYU pragma private; include "Rewired/Utils/BitTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__BitTools_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::BitTools.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int16_t, ::ArrayW<uint8_t>)>(&::Rewired::Utils::BitTools::GetBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181902430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::BitTools.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::ArrayW<uint8_t>)>(&::Rewired::Utils::BitTools::GetBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819023d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::BitTools.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::ArrayW<uint8_t>)>(&::Rewired::Utils::BitTools::GetBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181902350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::BitTools.rKWumMeIgJGrbHowbgbYHZDUSrQgb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::Rewired::Utils::BitTools::rKWumMeIgJGrbHowbgbYHZDUSrQgb)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181902600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"rKWumMeIgJGrbHowbgbYHZDUSrQgb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::BitTools.IntToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, int32_t)>(&::Rewired::Utils::BitTools::IntToFloat)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181902480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"IntToFloat", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::BitTools::setStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EdAXgSiLOYBLkxlmYBTBxlllXrUK", ::Rewired::Utils::BitTools*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Rewired::Utils::BitTools::getStaticF_EdAXgSiLOYBLkxlmYBTBxlllXrUK()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EdAXgSiLOYBLkxlmYBTBxlllXrUK", ::Rewired::Utils::BitTools*>();
}
inline void Rewired::Utils::BitTools::GetBytes(int16_t  value, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline void Rewired::Utils::BitTools::GetBytes(int32_t  value, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline void Rewired::Utils::BitTools::GetBytes(int64_t  value, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"GetBytes", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline ::ArrayW<uint8_t> Rewired::Utils::BitTools::rKWumMeIgJGrbHowbgbYHZDUSrQgb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"rKWumMeIgJGrbHowbgbYHZDUSrQgb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline float_t Rewired::Utils::BitTools::IntToFloat(::System::IntPtr  pointer, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::BitTools*>(),
                        {"IntToFloat", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pointer, offset);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::BitTools::BitTools()   {
}
