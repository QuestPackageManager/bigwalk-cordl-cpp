#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Browser/IContentBrowserDropAction.hpp"
#include "JBooth/MicroVerseCore/Browser/zzzz__IContentBrowserDropAction_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction::*)(::by_ref<bool>)>(&::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::Browser::IContentBrowserDropAction::Execute(::by_ref<bool>  destroyAfterExecute)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Browser::IContentBrowserDropAction*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyAfterExecute);
}
