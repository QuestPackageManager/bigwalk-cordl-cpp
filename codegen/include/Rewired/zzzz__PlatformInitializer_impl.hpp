#pragma once
// IWYU pragma private; include "Rewired/PlatformInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__PlatformInitializer_def.hpp"
#include "Rewired/Data/zzzz__IConfigVars_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IElementIdentifierTool_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::PlatformInitializer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::PlatformInitializer::*)(::Rewired::Data::IConfigVars_Internal*)>(&::Rewired::PlatformInitializer::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInitializer*>(),
                    {::i2c::class_of<::Rewired::PlatformInitializer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInitializer.CreateTool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Interfaces::IElementIdentifierTool* (::Rewired::PlatformInitializer::*)(::StringW)>(&::Rewired::PlatformInitializer::CreateTool)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlatformInitializer*>(),
                    {::i2c::class_of<::Rewired::PlatformInitializer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlatformInitializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlatformInitializer::*)()>(&::Rewired::PlatformInitializer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInitializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Rewired::PlatformInitializer::Initialize(::Rewired::Data::IConfigVars_Internal*  configVars)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInitializer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, configVars);
}
inline ::Rewired::Interfaces::IElementIdentifierTool* Rewired::PlatformInitializer::CreateTool(::StringW  inputSourceString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlatformInitializer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Interfaces::IElementIdentifierTool*>(this, ___internal_method, inputSourceString);
}
inline void Rewired::PlatformInitializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlatformInitializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlatformInitializer* Rewired::PlatformInitializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlatformInitializer*>());
}
// Ctor Parameters []
constexpr ::Rewired::PlatformInitializer::PlatformInitializer()   {
}
