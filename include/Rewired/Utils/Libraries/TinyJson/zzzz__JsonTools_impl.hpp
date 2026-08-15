#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/JsonTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Libraries/TinyJson/zzzz__JsonTools_def.hpp"
template<typename T>
inline T Rewired::Utils::Libraries::TinyJson::JsonTools::Clone(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Libraries::TinyJson::JsonTools*>(),
                    {"Clone", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Libraries::TinyJson::JsonTools::JsonTools()   {
}
