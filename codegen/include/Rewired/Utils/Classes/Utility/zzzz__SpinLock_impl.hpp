#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/SpinLock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__SpinLock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::SpinLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::SpinLock::*)()>(&::Rewired::Utils::Classes::Utility::SpinLock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::SpinLock.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::SpinLock::*)()>(&::Rewired::Utils::Classes::Utility::SpinLock::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18193b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::SpinLock.uJJEfUBkBvVIOlJGmpyfgvaMdMVV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::SpinLock::*)()>(&::Rewired::Utils::Classes::Utility::SpinLock::uJJEfUBkBvVIOlJGmpyfgvaMdMVV)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"uJJEfUBkBvVIOlJGmpyfgvaMdMVV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::SpinLock.GKCuGlBuXgIJRYZeMTuiXQXelZTn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::SpinLock::*)()>(&::Rewired::Utils::Classes::Utility::SpinLock::GKCuGlBuXgIJRYZeMTuiXQXelZTn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18193b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"GKCuGlBuXgIJRYZeMTuiXQXelZTn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::SpinLock.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::SpinLock* (::Rewired::Utils::Classes::Utility::SpinLock::*)()>(&::Rewired::Utils::Classes::Utility::SpinLock::Lock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Utils::Classes::Utility::SpinLock::__cordl_internal_get_kxYNRilzHelzvFcAHjLDhKFaOSxBb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kxYNRilzHelzvFcAHjLDhKFaOSxBb;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::SpinLock::__cordl_internal_get_kxYNRilzHelzvFcAHjLDhKFaOSxBb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kxYNRilzHelzvFcAHjLDhKFaOSxBb;
}
constexpr void Rewired::Utils::Classes::Utility::SpinLock::__cordl_internal_set_kxYNRilzHelzvFcAHjLDhKFaOSxBb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kxYNRilzHelzvFcAHjLDhKFaOSxBb = value;
}
inline void Rewired::Utils::Classes::Utility::SpinLock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::SpinLock::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::SpinLock::uJJEfUBkBvVIOlJGmpyfgvaMdMVV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"uJJEfUBkBvVIOlJGmpyfgvaMdMVV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::SpinLock::GKCuGlBuXgIJRYZeMTuiXQXelZTn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"GKCuGlBuXgIJRYZeMTuiXQXelZTn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Utility::SpinLock* Rewired::Utils::Classes::Utility::SpinLock::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::SpinLock*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::SpinLock*>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Utility::SpinLock* Rewired::Utils::Classes::Utility::SpinLock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::SpinLock*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::SpinLock::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::SpinLock::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::SpinLock::SpinLock()   {
}
