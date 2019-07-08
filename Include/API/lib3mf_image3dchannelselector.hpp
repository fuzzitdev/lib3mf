/*++

Copyright (C) 2019 3MF Consortium (Original Author)

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Abstract: This is the class declaration of CImage3DChannelSelector

*/


#ifndef __LIB3MF_IMAGE3DCHANNELSELECTOR
#define __LIB3MF_IMAGE3DCHANNELSELECTOR

#include "lib3mf_interfaces.hpp"

// Parent classes
#include "lib3mf_base.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4250)
#endif

// Include custom headers here.

#include "Model/Classes/NMR_ModelImage3DChannelSelector.h"

namespace Lib3MF {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CImage3DChannelSelector 
**************************************************************************************************************************/

class CImage3DChannelSelector : public virtual IImage3DChannelSelector, public virtual CBase {
private:

protected:

	NMR::PModelImage3DChannelSelector m_pSelector;
	NMR::PModel m_pModel;


public:

	CImage3DChannelSelector (NMR::PModel pModel, NMR::PModelImage3DChannelSelector pSelector);

	IImage3D * GetImage();

	void SetImage(IImage3D* pImage3D);

	void SetSourceChannel(const std::string & sChannelName);

	std::string GetSourceChannel();

	void SetDestinationChannel(const std::string & sChannelName);

	std::string GetDestinationChannel();

	void SetFilter(const Lib3MF::eTextureFilter eFilter);

	Lib3MF::eTextureFilter GetFilter();

	void SetTileStyles(const Lib3MF::eTextureTileStyle eTileStyleU, const Lib3MF::eTextureTileStyle eTileStyleV, const Lib3MF::eTextureTileStyle eTileStyleW);

	void GetTileStyles(Lib3MF::eTextureTileStyle & eTileStyleU, Lib3MF::eTextureTileStyle & eTileStyleV, Lib3MF::eTextureTileStyle & eTileStyleW);

	void SetValueRange(const Lib3MF_double dMin, const Lib3MF_double dMax);

	void GetValueRange(Lib3MF_double & dMin, Lib3MF_double & dMax);

	NMR::PModelImage3DChannelSelector getModelSelector ();

};

} // namespace Impl
} // namespace Lib3MF

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#endif // __LIB3MF_IMAGE3DCHANNELSELECTOR