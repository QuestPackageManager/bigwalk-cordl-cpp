#pragma once
// IWYU pragma private; include "Dissonance/Threading/DThread.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Threading/zzzz__DThread_def.hpp"
#include "Dissonance/Threading/zzzz__IThread_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Dissonance::Threading::DThread.get_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Threading::DThread::*)()>(&::Dissonance::Threading::DThread::get_IsStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"get_IsStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Threading::DThread.set_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Threading::DThread::*)(bool)>(&::Dissonance::Threading::DThread::set_IsStarted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Threading::DThread._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Threading::DThread::*)(::System::Action*)>(&::Dissonance::Threading::DThread::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805db310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Threading::DThread.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Threading::DThread::*)()>(&::Dissonance::Threading::DThread::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805db2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Threading::DThread.Join
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Threading::DThread::*)()>(&::Dissonance::Threading::DThread::Join)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805db2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"Join", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Thread*& Dissonance::Threading::DThread::__cordl_internal_get__thread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr ::System::Threading::Thread* const& Dissonance::Threading::DThread::__cordl_internal_get__thread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thread;
}
constexpr void Dissonance::Threading::DThread::__cordl_internal_set__thread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thread = value;
}
constexpr bool& Dissonance::Threading::DThread::__cordl_internal_get__IsStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr bool const& Dissonance::Threading::DThread::__cordl_internal_get__IsStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr void Dissonance::Threading::DThread::__cordl_internal_set__IsStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStarted_k__BackingField = value;
}
inline bool Dissonance::Threading::DThread::get_IsStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"get_IsStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Threading::DThread::set_IsStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::Threading::DThread::_ctor(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void Dissonance::Threading::DThread::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Threading::DThread::Join()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Threading::DThread*>(),
                        {"Join", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Threading::DThread* Dissonance::Threading::DThread::New_ctor(::System::Action*  action)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Threading::DThread*>(action));
}
/// @brief Convert operator to "::Dissonance::Threading::IThread"
constexpr  Dissonance::Threading::DThread::operator ::Dissonance::Threading::IThread*() noexcept {
return static_cast<::Dissonance::Threading::IThread*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Threading::IThread"
constexpr ::Dissonance::Threading::IThread* Dissonance::Threading::DThread::i___Dissonance__Threading__IThread() noexcept {
return static_cast<::Dissonance::Threading::IThread*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Threading::DThread::DThread()   {
}
