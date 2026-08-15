#pragma once
// IWYU pragma private; include "System/IO/DisableMediaInsertionPrompt.hpp"
#include "System/IO/zzzz__DisableMediaInsertionPrompt_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::IO::DisableMediaInsertionPrompt.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::DisableMediaInsertionPrompt (*)()>(&::System::IO::DisableMediaInsertionPrompt::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816d32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DisableMediaInsertionPrompt>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::DisableMediaInsertionPrompt.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::DisableMediaInsertionPrompt::*)()>(&::System::IO::DisableMediaInsertionPrompt::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816d3330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DisableMediaInsertionPrompt>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::DisableMediaInsertionPrompt::setStaticF_useUWPFallback(bool  value)  {
::cordl_internals::setStaticField<bool, "useUWPFallback", ::System::IO::DisableMediaInsertionPrompt>(std::forward<bool>(value));
}
inline bool System::IO::DisableMediaInsertionPrompt::getStaticF_useUWPFallback()  {
return ::cordl_internals::getStaticField<bool, "useUWPFallback", ::System::IO::DisableMediaInsertionPrompt>();
}
inline ::System::IO::DisableMediaInsertionPrompt System::IO::DisableMediaInsertionPrompt::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DisableMediaInsertionPrompt>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DisableMediaInsertionPrompt>(nullptr, ___internal_method);
}
inline void System::IO::DisableMediaInsertionPrompt::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::DisableMediaInsertionPrompt>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::IO::DisableMediaInsertionPrompt::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::DisableMediaInsertionPrompt::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_disableSuccess", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_oldMode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::DisableMediaInsertionPrompt::DisableMediaInsertionPrompt(bool  _disableSuccess, uint32_t  _oldMode) noexcept  {
this->_disableSuccess = _disableSuccess;
this->_oldMode = _oldMode;
}
// Ctor Parameters []
constexpr ::System::IO::DisableMediaInsertionPrompt::DisableMediaInsertionPrompt()   {
}
