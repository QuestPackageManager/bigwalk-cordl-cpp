#pragma once
// IWYU pragma private; include "Rewired/InputManagers/Initializer.hpp"
#include "Rewired/zzzz__PlatformInitializer_impl.hpp"
#include "Rewired/InputManagers/zzzz__Initializer_def.hpp"
#include "Rewired/Data/zzzz__IConfigVars_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IElementIdentifierTool_def.hpp"
#include "Rewired/zzzz__PlatformInitializer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::InputManagers::Initializer.GetPlatformInitializer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlatformInitializer* (*)()>(&::Rewired::InputManagers::Initializer::GetPlatformInitializer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819f36c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::Initializer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::InputManagers::Initializer::*)(::Rewired::Data::IConfigVars_Internal*)>(&::Rewired::InputManagers::Initializer::Initialize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1819f3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                    {::i2c::class_of<::Rewired::InputManagers::Initializer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::Initializer.CreateTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IElementIdentifierTool* (::Rewired::InputManagers::Initializer::*)(::StringW)>(&::Rewired::InputManagers::Initializer::CreateTool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819f3660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                    {::i2c::class_of<::Rewired::InputManagers::Initializer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputManagers::Initializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputManagers::Initializer::*)()>(&::Rewired::InputManagers::Initializer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::InputManagers::Initializer::setStaticF_WTWupdQtAkIzljufVSQMkZozZFVl(::Rewired::PlatformInitializer*  value)  {
::cordl_internals::setStaticField<::Rewired::PlatformInitializer*, "WTWupdQtAkIzljufVSQMkZozZFVl", ::Rewired::InputManagers::Initializer*>(std::forward<::Rewired::PlatformInitializer*>(value));
}
inline ::Rewired::PlatformInitializer* Rewired::InputManagers::Initializer::getStaticF_WTWupdQtAkIzljufVSQMkZozZFVl()  {
return ::cordl_internals::getStaticField<::Rewired::PlatformInitializer*, "WTWupdQtAkIzljufVSQMkZozZFVl", ::Rewired::InputManagers::Initializer*>();
}
inline ::Rewired::PlatformInitializer* Rewired::InputManagers::Initializer::GetPlatformInitializer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                        {"GetPlatformInitializer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlatformInitializer*>(nullptr, ___internal_method);
}
inline ::System::Object* Rewired::InputManagers::Initializer::Initialize(::Rewired::Data::IConfigVars_Internal*  configVars)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::Initializer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, configVars);
}
inline ::Rewired::Interfaces::IElementIdentifierTool* Rewired::InputManagers::Initializer::CreateTool(::StringW  inputSourceString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::InputManagers::Initializer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IElementIdentifierTool*>(this, ___internal_method, inputSourceString);
}
inline void Rewired::InputManagers::Initializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputManagers::Initializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::InputManagers::Initializer* Rewired::InputManagers::Initializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputManagers::Initializer*>());
}
// Ctor Parameters []
constexpr ::Rewired::InputManagers::Initializer::Initializer()   {
}
