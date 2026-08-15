#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerTemplateElementIdentifier.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
//  Writing Method size for method: ::Rewired::Interfaces::IControllerTemplateElementIdentifier.get_elementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementType (::Rewired::Interfaces::IControllerTemplateElementIdentifier::*)()>(&::Rewired::Interfaces::IControllerTemplateElementIdentifier::get_elementType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(),
                    {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerTemplateElementType Rewired::Interfaces::IControllerTemplateElementIdentifier::get_elementType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementType>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr  Rewired::Interfaces::IControllerTemplateElementIdentifier::operator ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Interfaces::IControllerTemplateElementIdentifier::i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
