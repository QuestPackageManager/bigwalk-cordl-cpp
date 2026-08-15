#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IElementIdentifierTool.hpp"
#include "Rewired/Interfaces/zzzz__IElementIdentifierTool_def.hpp"
#include "Rewired/Internal/zzzz__GUIText_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IElementIdentifierTool.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IElementIdentifierTool::*)(::Rewired::Internal::GUIText*)>(&::Rewired::Interfaces::IElementIdentifierTool::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IElementIdentifierTool.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IElementIdentifierTool::*)()>(&::Rewired::Interfaces::IElementIdentifierTool::Start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IElementIdentifierTool.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IElementIdentifierTool::*)()>(&::Rewired::Interfaces::IElementIdentifierTool::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IElementIdentifierTool.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Interfaces::IElementIdentifierTool::*)()>(&::Rewired::Interfaces::IElementIdentifierTool::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Interfaces::IElementIdentifierTool::Initialize(::Rewired::Internal::GUIText*  guiText)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guiText);
}
inline void Rewired::Interfaces::IElementIdentifierTool::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Interfaces::IElementIdentifierTool::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Interfaces::IElementIdentifierTool::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IElementIdentifierTool*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
