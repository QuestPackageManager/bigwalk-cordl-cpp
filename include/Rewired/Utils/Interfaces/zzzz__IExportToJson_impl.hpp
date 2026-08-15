#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExportToJson.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IExportToJson_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Interfaces::IExportToJson.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Interfaces::IExportToJson::*)(::System::Text::StringBuilder*, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*)>(&::Rewired::Utils::Interfaces::IExportToJson::WriteJson)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Interfaces::IExportToJson*>(),
                    {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToJson*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Interfaces::IExportToJson::WriteJson(::System::Text::StringBuilder*  stringBuilder, ::System::Action_2<::System::Text::StringBuilder*,::System::Object*>*  appendValueDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Interfaces::IExportToJson*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stringBuilder, appendValueDelegate);
}
