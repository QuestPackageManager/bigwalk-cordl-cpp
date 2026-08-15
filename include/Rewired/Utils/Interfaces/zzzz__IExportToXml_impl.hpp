#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExportToXml.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExportToXml_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IExportToXml.get_writesOwnElementTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Interfaces::IExportToXml::*)()>(&::Rewired::Utils::Interfaces::IExportToXml::get_writesOwnElementTag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IExportToXml.WriteXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Interfaces::IExportToXml::*)(::System::Xml::XmlWriter*)>(&::Rewired::Utils::Interfaces::IExportToXml::WriteXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::Utils::Interfaces::IExportToXml::get_writesOwnElementTag()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Interfaces::IExportToXml::WriteXml(::System::Xml::XmlWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToXml*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
