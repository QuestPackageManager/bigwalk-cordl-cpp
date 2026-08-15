#pragma once
// IWYU pragma private; include "Rewired/ControllerWithMap.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "Rewired/zzzz__ControllerWithMap_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerWithMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerWithMap::*)(int32_t, ::Rewired::InputSource, ::StringW, ::StringW, ::StringW, ::Rewired::ControllerType, ::System::Guid, int32_t, ::ArrayW<bool>, ::Rewired::HardwareControllerMap_Game*, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::ControllerWithMap::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181852170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::ControllerWithMap::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerWithMap*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11);
}
inline ::Rewired::ControllerWithMap* Rewired::ControllerWithMap::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_5, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<bool>  _cordl_fixed_empty_name_whitespace_param_8, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_10, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_11)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerWithMap*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8, _cordl_fixed_empty_name_whitespace_param_9, _cordl_fixed_empty_name_whitespace_param_10, _cordl_fixed_empty_name_whitespace_param_11));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerWithMap::ControllerWithMap()   {
}
