#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobals.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGlobals_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGlobals._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGlobals::*)()>(&::TheVisualEngine::TVEGlobals::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobals*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void TheVisualEngine::TVEGlobals::setStaticF_searchMaterial(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "searchMaterial", ::TheVisualEngine::TVEGlobals*>(std::forward<::StringW>(value));
}
inline ::StringW TheVisualEngine::TVEGlobals::getStaticF_searchMaterial()  {
return ::cordl_internals::getStaticField<::StringW, "searchMaterial", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::setStaticF_searchElement(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "searchElement", ::TheVisualEngine::TVEGlobals*>(std::forward<::StringW>(value));
}
inline ::StringW TheVisualEngine::TVEGlobals::getStaticF_searchElement()  {
return ::cordl_internals::getStaticField<::StringW, "searchElement", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::setStaticF_searchManager(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "searchManager", ::TheVisualEngine::TVEGlobals*>(std::forward<::StringW>(value));
}
inline ::StringW TheVisualEngine::TVEGlobals::getStaticF_searchManager()  {
return ::cordl_internals::getStaticField<::StringW, "searchManager", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::setStaticF_searchCopyPaste(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "searchCopyPaste", ::TheVisualEngine::TVEGlobals*>(std::forward<::StringW>(value));
}
inline ::StringW TheVisualEngine::TVEGlobals::getStaticF_searchCopyPaste()  {
return ::cordl_internals::getStaticField<::StringW, "searchCopyPaste", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::setStaticF_settingPresetPaths(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "settingPresetPaths", ::TheVisualEngine::TVEGlobals*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* TheVisualEngine::TVEGlobals::getStaticF_settingPresetPaths()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "settingPresetPaths", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::setStaticF_settingPresetsEnum(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "settingPresetsEnum", ::TheVisualEngine::TVEGlobals*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> TheVisualEngine::TVEGlobals::getStaticF_settingPresetsEnum()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "settingPresetsEnum", ::TheVisualEngine::TVEGlobals*>();
}
inline void TheVisualEngine::TVEGlobals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGlobals*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGlobals* TheVisualEngine::TVEGlobals::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGlobals*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGlobals::TVEGlobals()   {
}
