#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerTemplateElementIdentifier_Editor.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_Editor_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor.get_scriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::get_scriptingName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor.get_alternateScriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::get_alternateScriptingName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::get_scriptingName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::get_alternateScriptingName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr  Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::operator ::Rewired::Interfaces::IControllerTemplateElementIdentifier*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::i___Rewired__Interfaces__IControllerTemplateElementIdentifier() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr  Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::operator ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor::i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
