#pragma once
// IWYU pragma private; include "Rowlan/Genesis/ITemplateCollection.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateCollection_def.hpp"
#include "Rowlan/Genesis/zzzz__ITemplateSettings_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::ITemplateCollection.GetPresetHelpText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rowlan::Genesis::ITemplateCollection::*)()>(&::Rowlan::Genesis::ITemplateCollection::GetPresetHelpText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(),
                    {::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::ITemplateCollection.GetTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rowlan::Genesis::ITemplateSettings*> (::Rowlan::Genesis::ITemplateCollection::*)()>(&::Rowlan::Genesis::ITemplateCollection::GetTemplates)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(),
                    {::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Rowlan::Genesis::ITemplateCollection::GetPresetHelpText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::Rowlan::Genesis::ITemplateSettings*> Rowlan::Genesis::ITemplateCollection::GetTemplates()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::Genesis::ITemplateCollection*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rowlan::Genesis::ITemplateSettings*>>(this, ___internal_method);
}
