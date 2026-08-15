#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ITemplateSettings.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::ITemplateSettings.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::ITemplateSettings::*)()>(&::Rowlan::Genesis::ITemplateSettings::GetName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::Genesis::ITemplateSettings*>(),
                    {::i2c::class_of<::Rowlan::Genesis::ITemplateSettings*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW Rowlan::Genesis::ITemplateSettings::GetName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::Genesis::ITemplateSettings*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
